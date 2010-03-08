/*
 * FloatInputField.h
 *
 *  Created on: Mar 8, 2010
 *      Author: d3f3nd3r
 */

#ifndef FLOATINPUTFIELD_H_
#define FLOATINPUTFIELD_H_

#include "taglib/taglib.h"
#include "taglib/tags.h"

#include "ethernet/httpd/cgi/ssiparams.h"

void vParseFloatInputField(char* param, int len);
char* pcFormatFloatValue(basicDisplayLine *line);
void io_get_float_input_field(char * pcBuf, int iBufLen, pSSIParam *params);


#endif /* FLOATINPUTFIELD_H_ */
