/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
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
  int end = -1;
  int begin = -1;
  unsigned int count = strlen(source);

strcpy(trimmed_string, ""); // reset trimmed_string

  if(count > 0)
  {
    count--;
    while((end == -1) && (count >= 0))
    {
      if(!isEmpty(source[count]))
      {
        end = count;
      }
      count--;
    }

    count = 0;
    while((begin == -1) && (count < strlen(source)))
    {
      if(!isEmpty(source[count]))
      {
        begin = count;
      }
      count++;
    }
  }

  count = 0;
  for (int i = begin; i <= end; i++)
  {
    trimmed_string[i-begin] = source[i];
  }

  if(end+1 < (int)strlen(source))
  {
    trimmed_string[end+1] = '\0';
  }
}

bool isEmpty(char char1){
  return char1 == ' ';
}
