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
  int end = -1;
int start = -1;
unsigned int count = strlen(source);

strcpy(trimmed_string, ""); // delete content of trimmed_string

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
    while((start == -1) && (count < strlen(source)))
    {
      if(!isEmpty(source[count]))
      {
        start = count;
      }
      count++;
    }
  }

  count = 0;
  for (int i = start; i <= end; i++) {
    trimmed_string[i-start] = source[i];
  }

  if(end+1 < (int)strlen(source))
  {
    trimmed_string[end+1] = '\0';
}
}

bool isEmpty(char char1){
  return char1 == ' ';
}
