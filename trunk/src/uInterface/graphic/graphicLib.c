#include "graphic/graphicLib.h"

#include "hw_types.h"
#include "grlib/grlib.h"
#include "grlib/widget.h"
#include "grlib/canvas.h"
#include "grlib/pushbutton.h"
#include "grlib/slider.h"
#include "kitronix320x240x16_ssd2119_8bit.h"

/* Header Rectangle */
tRectangle sRect;

/**
 * Initializes the Panel
 */
void initPanel(char* headerText) {

	//
	// Initialize the graphics context.
	//
	printf("Initialize Graphic Context ...\n");
	GrContextInit(&g_sContext, &g_sKitronix320x240x16_SSD2119);

	//
	// Fill the top 24 rows of the screen with blue to create the banner.
	//
	sRect.sXMin = 5;
	sRect.sYMin = 5;
	sRect.sXMax = GrContextDpyWidthGet(&g_sContext) - 5;
	sRect.sYMax = 28;

	GrContextForegroundSet(&g_sContext, ClrRed);
	GrRectFill(&g_sContext, &sRect);

	//
	// Put a white box around the banner.
	//
	GrContextForegroundSet(&g_sContext, ClrWhite);
	GrRectDraw(&g_sContext, &sRect);

	//
	// Put the application name in the middle of the banner.
	//
	GrContextFontSet(&g_sContext, &g_sFontCm14);
	GrStringDrawCentered(&g_sContext, headerText, -1,
			GrContextDpyWidthGet(&g_sContext) / 2, 15, 0);

	printf("Destroy old Panel\n");
	destroyPanel();

	printf("Create new Panel\n");

	xParentContainer = (tCanvasWidget*) pvPortMalloc(sizeof(tCanvasWidget));

	xParentContainer->sBase.lSize = sizeof(tCanvasWidget);

	xParentContainer->sBase.pParent = 0;
	xParentContainer->sBase.pDisplay = &g_sKitronix320x240x16_SSD2119;
	xParentContainer->sBase.pNext = 0;
	xParentContainer->sBase.pfnMsgProc = CanvasMsgProc;
	xParentContainer->sBase.sPosition.sXMin = 0;
	xParentContainer->sBase.sPosition.sYMin = 30;
	xParentContainer->sBase.sPosition.sXMax = 320;
	xParentContainer->sBase.sPosition.sYMax = 166;

	xParentContainer->pFont = 0;
	xParentContainer->pcText = 0;
	xParentContainer->pfnOnPaint = 0;
	xParentContainer->pucImage = 0;
	xParentContainer->ulFillColor = ClrBlack;
	xParentContainer->ulOutlineColor = 0;
	xParentContainer->ulStyle = CANVAS_STYLE_FILL;
	xParentContainer->ulTextColor = 0;

	printf("Adding ROOT Widget ...\n");
	WidgetAdd(WIDGET_ROOT, (tWidget*) xParentContainer);

}

/**
 * Adds a Button to the Panel
 */
tPushButtonWidget *addButton(int left, int top, int width, int height,
		char* label, tBoolean autorepeat, void(*callback)(tWidget *pWidget)) {
	tPushButtonWidget * aktButton = (tPushButtonWidget*) pvPortMalloc(
			sizeof(tPushButtonWidget));

	aktButton->pFont = &g_sFontCm14b;
	aktButton->pcText = label;
	aktButton->pfnOnClick = callback;
	aktButton->pucImage = 0;
	aktButton->pucPressImage = 0;
	aktButton->sBase.lSize = sizeof(tPushButtonWidget);
	aktButton->sBase.pParent = (tWidget*) xParentContainer;
	aktButton->sBase.pChild = 0;
	aktButton->sBase.pDisplay = &g_sKitronix320x240x16_SSD2119;
	aktButton->sBase.pNext = 0;
	aktButton->sBase.pfnMsgProc = RectangularButtonMsgProc;
	aktButton->sBase.sPosition.sXMin = left;
	aktButton->sBase.sPosition.sYMin = top;
	aktButton->sBase.sPosition.sXMax = left + width - 1;
	aktButton->sBase.sPosition.sYMax = top + height - 1;
	aktButton->ulFillColor = ClrMidnightBlue;
	aktButton->ulOutlineColor = ClrGray;
	aktButton->ulPressFillColor = ClrGray;
	aktButton->ulStyle = PB_STYLE_FILL | PB_STYLE_OUTLINE | PB_STYLE_TEXT;
	aktButton->ulTextColor = ClrWhite;

	if (autorepeat) {
		aktButton->ulStyle |= PB_STYLE_AUTO_REPEAT;
		aktButton->usAutoRepeatDelay = 200; // change for Autorepeat
		aktButton->usAutoRepeatRate = 50;// change for Autorepeat
		aktButton->ulAutoRepeatCount = 1; // change for Autorepeat
	} else {
		aktButton->usAutoRepeatDelay = 0; // change for Autorepeat
		aktButton->usAutoRepeatRate = 0;// change for Autorepeat
		aktButton->ulAutoRepeatCount = 0; // change for Autorepeat
	}
	if (xLastInsertedObject) {
		xLastInsertedObject->pNext = (tWidget*) aktButton;
	}

	if (!xRootObject) {
		xRootObject = (tWidget *) aktButton;
	}
	xLastInsertedObject = (tWidget *) aktButton;

	return aktButton;
}

tCanvasWidget *addLabel(int left, int top, int width, int height, char* text) {
	tCanvasWidget * aktLabel = (tCanvasWidget*) pvPortMalloc(
			sizeof(tCanvasWidget));

	aktLabel->pFont = &g_sFontCm14b;
	aktLabel->pcText = text;
	aktLabel->pucImage = 0;
	aktLabel->sBase.lSize = sizeof(tCanvasWidget);
	aktLabel->sBase.pParent = (tWidget*) xParentContainer;
	aktLabel->sBase.pChild = 0;
	aktLabel->sBase.pDisplay = &g_sKitronix320x240x16_SSD2119;
	aktLabel->sBase.pNext = 0;
	aktLabel->sBase.pfnMsgProc = CanvasMsgProc;
	aktLabel->sBase.sPosition.sXMin = left;
	aktLabel->sBase.sPosition.sYMin = top;
	aktLabel->sBase.sPosition.sXMax = left + width - 1;
	aktLabel->sBase.sPosition.sYMax = top + height - 1;
	aktLabel->ulFillColor = ClrBlack;
	aktLabel->ulOutlineColor = ClrGray;
	aktLabel->ulStyle = CB_STYLE_TEXT | CB_STYLE_FILL;
	aktLabel->ulTextColor = ClrWhite;

	if (xLastInsertedObject) {
		xLastInsertedObject->pNext = (tWidget*) aktLabel;
	}

	if (!xRootObject) {
		xRootObject = (tWidget *) aktLabel;
	}
	xLastInsertedObject = (tWidget *) aktLabel;

	return aktLabel;
}

tSliderWidget *addSlider(int left, int top, int width, int height, char* label,
		long value, void(*callback)(tWidget *pWidget, long value)) {
	tSliderWidget * aktSlider = (tSliderWidget*) pvPortMalloc(
			sizeof(tSliderWidget));

	aktSlider->pFont = &g_sFontCm14b;
	aktSlider->pcText = label;

	aktSlider->lValue = value;
	aktSlider->lMax = 0;
	aktSlider->lMin = 100;

	aktSlider->pucImage = 0;

	aktSlider->sBase.lSize = sizeof(tSliderWidget);
	aktSlider->sBase.pParent = (tWidget*) xParentContainer;
	aktSlider->sBase.pChild = 0;
	aktSlider->sBase.pDisplay = &g_sKitronix320x240x16_SSD2119;
	aktSlider->sBase.pNext = 0;
	aktSlider->sBase.pfnMsgProc = SliderMsgProc;
	aktSlider->sBase.sPosition.sXMin = left;
	aktSlider->sBase.sPosition.sYMin = top;
	aktSlider->sBase.sPosition.sXMax = left + width - 1;
	aktSlider->sBase.sPosition.sYMax = top + height - 1;

	aktSlider->pfnOnChange = callback;

	aktSlider->pucBackgroundImage = 0;
	aktSlider->sPos = 0;

	aktSlider->ulTextColor = ClrWhite;
	aktSlider->ulBackgroundTextColor = ClrWhite;
	aktSlider->ulFillColor = ClrMidnightBlue;
	aktSlider->ulBackgroundFillColor = ClrGreen;
	aktSlider->ulOutlineColor = ClrGray;

	aktSlider->ulStyle = SL_STYLE_BACKG_FILL | SL_STYLE_FILL | SL_STYLE_OUTLINE
			| SL_STYLE_TEXT | SL_STYLE_BACKG_TEXT;

	if (xLastInsertedObject) {
		xLastInsertedObject->pNext = (tWidget*) aktSlider;
	}

	if (!xRootObject) {
		xRootObject = (tWidget *) aktSlider;
	}
	xLastInsertedObject = (tWidget *) aktSlider;

	return aktSlider;
}

void drawPanel(void) {
	//
	// Issue the initial paint request to the widgets.
	//
	if (xParentContainer) {
		xParentContainer->sBase.pChild = xRootObject;

		printf("Zeichne Panel\n");
		WidgetPaint(WIDGET_ROOT);
	}
}

/**
 * Frees the RAM for any Widget (recursive)
 */
void destroyWidget(tWidget* toDestroy) {
	if (toDestroy) {
		destroyWidget(toDestroy->pChild);
		destroyWidget(toDestroy->pNext);
	}
}

/**
 * Free all the RAM from the actual Panel
 */
void destroyPanel(void) {
	if (xParentContainer != 0) {
		printf("destroyPanel: destroy sBase.child\n");
		destroyWidget(xParentContainer->sBase.pChild);
		printf("destroyPanel: destroy sBase.next\n");
		destroyWidget(xParentContainer->sBase.pNext);
		printf("destroyPanel: free Container \n");
		vPortFree(xParentContainer);

		//
		// Fill the top 24 rows of the screen with blue to create the banner.
		//
		sRect.sXMin = 0;
		sRect.sYMin = 0;
		sRect.sXMax = GrContextDpyWidthGet(&g_sContext);
		sRect.sYMax = GrContextDpyHeightGet(&g_sContext);

		GrContextForegroundSet(&g_sContext, ClrBlack);
		GrContextBackgroundSet(&g_sContext, ClrBlack);
		GrRectFill(&g_sContext, &sRect);
		GrRectDraw(&g_sContext, &sRect);
	}
}

