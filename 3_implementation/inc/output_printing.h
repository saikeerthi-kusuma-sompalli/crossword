/** 
* @file output_printing.h
* crossword application that prints words from left to right and top to bottom with index
*
*/
#ifndef __OUTPUT_PRINTING_H__
#define __OUTPUT_PRINTING_H__

#include <stdio.h> ///< The stdio.h header defines three variable types, several macros, and various functions for performing input and output.
#include <stdlib.h>

char a[6][7];
int b[6][7];
void output_hor(int n, int m);

/**
*  print elements from left to right with index
* @param  n the size of row
* @param  m the size of column
*
*/

void output_ver(int n, int m);

/**
*  print elemenets from top to bottom with index
* @param n the size of row
* @param m the size of column
*/

#endif  /* #define __OUTPUT_PRINTING_H__ */