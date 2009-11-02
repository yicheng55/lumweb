/*
 * graphicBextBoxs.c
 *
 *  Created on: 20.10.2009
 *      Author: anzinger
 */

#include "string.h"
#include "graphicObjects.h"
#include "graphicTextbox.h"
#include "renderGraphics.h"
#include "rit128x96x4.h"

#include "DebugUART/debugUART.h"
#include "ComTask/comTask.h"

tBoolean overflowTop, overflowBottom;
tBoolean offsetChanged = false;
/**
 * Draws a simple BextBox with Labelimage
 *
 * returns a structure from the BextBox
 */
pgoTextBox goNewTextBox(int size, int left, int top, char *commTaskLink)
{
	// Allocate RAM for the TextBox
	pgoTextBox txt = (pgoTextBox) pvPortMalloc(sizeof(struct goTextBox));

	// Write the Parameters into the structure
	txt->size = size;
	txt->left = left;
	txt->top = top;
	txt->commTaskLink = commTaskLink;

	// get the Value for the Box
	txt->value = iTextBoxGetValue(commTaskLink);

	// insert the Box into the Display Queue
	goInsertTextBox(txt);

	// If no Box is Selected (= if it is the first) set the Box activated
	if (textBoxListSelected == NULL)
	{
		textBoxListSelected = txt;
	}

	// Return the actual Instance
	return txt;
}

/*
 * Draws a TextBox to the Screen
 */
void goDrawTextBox(pgoTextBox txt)
{
	unsigned char buffer[32];
	unsigned int height, width;
	const unsigned char *border = pucTextboxNormal;


	if (textBoxListSelected->top + offset < 0)
	{
		offset += LINE_HEIGHT;
		offsetChanged = true;
	}
	else if (textBoxListSelected->top + offset > (VISIBLE_HEIGHT
			- OBJECT_HEIGHT))
	{
		offset -= LINE_HEIGHT;
		offsetChanged = true;
	}

	if (textBoxListSelected == textBoxListRoot)
	{
		offset = 0;
	}

	if (txt->top + offset < 0)
	{
		overflowTop = true;
	}
	else if (txt->top + offset > (VISIBLE_HEIGHT - OBJECT_HEIGHT))
	{
		overflowBottom = true;
	}
	else
	{
		if (textBoxListSelected == txt)
		{
			border = pucTextboxSelected;
		}

		if (offsetChanged == true)
		{
			RIT128x96x4StringDraw("             ", txt->left, txt->top + 1
					+ offset, 0xF);
		}
		RIT128x96x4StringDraw(txt->commTaskLink, txt->left, txt->top + 1
				+ offset, 0xF);
		goDrawBorder(OBJECT_HEIGHT, ((txt->size * (CHAR_WIDTH + 1)) + 2),
				txt->left + 75, txt->top + offset, border);

		sprintf(buffer, "%d", txt->value);
		RIT128x96x4StringDraw(buffer, txt->left + 77, txt->top + 1 + offset,
				0xF);
	}
}

void goDrawTextBoxes(void)
{
	pgoTextBox akt = textBoxListRoot;

	overflowTop = false;
	overflowBottom = false;
	offsetChanged = false;

	while (akt != NULL)
	{

		goDrawTextBox(akt);
		akt = akt->next;
	}
}

/*
 * Frees the allocated Memory
 */
void goDeleteTextBox(pgoTextBox txt)
{
	pgoTextBox toDelete;
	toDelete = txt;
	txt = txt->next;
	vPortFree(toDelete);
}

/*
 * Returns the next TextBox, null if there isn't one
 */
pgoTextBox goGetNextTextBox(pgoTextBox txt)
{
	if (txt->next == NULL)
	{
		return textBoxListRoot;
	}
	return txt->next;
}

/*
 * Returns the Last TextBox, null if List ist empty
 */
pgoTextBox goGetLastTextBox(void)
{
	return textBoxListLast;
}

/*
 * Returns the TextBox before, null if empty or first
 */
pgoTextBox goGetPrevTextBox(pgoTextBox txt)
{
	pgoTextBox akt = textBoxListRoot;
	while (akt->next != NULL && akt->next != txt)
	{
		akt = akt->next;
	}
	return akt;
}

/*
 * Returns the First TextBox, null if empty
 */
pgoTextBox goGetFirstTextBox(void)
{
	return textBoxListRoot;
}

/*
 * Inserts the TextBox into the List
 */
void goInsertTextBox(pgoTextBox txt)
{
	if (textBoxListRoot == NULL)
	{
		textBoxListRoot = txt;
	}
	else
	{
		textBoxListLast->next = txt;
	}
	textBoxListLast = txt;
}

/*
 * Increments the Textbox Value
 */
void vTextBoxIncrement(void* pvParam)
{
	(textBoxListSelected->value) += 1;
	goDrawTextBox(textBoxListSelected);
}

/*
 * Decrements the Textbox Value
 */
void vTextBoxDecrement(void* pvParam)
{
	(textBoxListSelected->value) -= 1;
	goDrawTextBox(textBoxListSelected);
}

/*
 * Function to Load the Value form the Communication Task
 */
int iTextBoxGetValue(char *value)
{
	xCOMMessage xMessage;
	xGraphCommunication xGraphicMessage;

	xMessage.item = value;
	xMessage.cmd = GET;
	xMessage.from = GRAPHIC;

	xQueueSend(xCOMQueue, &xMessage, (portTickType) 0);

	//vTaskSuspend(xGraphicObjectsTaskHandler);

	if (xQueueReceive(xGraphCommunicationQueue, &xGraphicMessage, (portTickType) 100))
	{
		// TODO auch auf request überprüfen
		return xGraphicMessage.value;
	}
	return 0;
}

/*
 * Writes the Value to the Communication Task
 */
void vTextBoxSetValues(void)
{
	xCOMMessage xMessage;
	pgoTextBox akt = textBoxListRoot;
	while (akt != NULL)
	{
		xMessage.item = akt->commTaskLink;
		xMessage.value = akt->value;
		xMessage.cmd = SET;
		xMessage.from = GRAPHIC;

		xQueueSend(xCOMQueue, &xMessage, (portTickType) 0);

		akt = akt->next;
	}
}

/*
 * This Function refreshes all the Values from the Textboxes
 */
void vTextBoxGetValues(void)
{
	xCOMMessage xMessage;
	xGraphCommunication xGraphicMessage;
	pgoTextBox akt = textBoxListRoot;
	while (akt != NULL)
	{
		xMessage.item = akt->commTaskLink;
		xMessage.cmd = GET;
		xMessage.from = GRAPHIC;

		xQueueSend(xCOMQueue, &xMessage, (portTickType) 0);

		//vTaskSuspend(xGraphicObjectsTaskHandler);

		if (xQueueReceive(xGraphCommunicationQueue, &xGraphicMessage, (portTickType) 100))
		{
			akt->value = xGraphicMessage.value;
		}
	}
}