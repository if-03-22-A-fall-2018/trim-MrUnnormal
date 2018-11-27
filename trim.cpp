/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 10
 * Title:			trim.cpp
 * Author:			Jan Kaufmann
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "string.h"
#include "trim.h"

void trim (const char* source, char* trimmed_string)
{
  int leading_blanks = 0;
  int temp = 0;
  while (source[leading_blanks] == ' ')
  {
    leading_blanks++;
  }
  for (size_t i = leading_blanks;i < strlen(source); i++)
  {
    for (size_t o = 0;o < strlen(source); o++)
    {
      trimmed_string[o] = source[i];
    }
    temp = i;
  }

  trimmed_string[temp + 1] = '\0';
}
