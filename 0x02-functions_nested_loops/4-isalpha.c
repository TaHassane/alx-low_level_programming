#include <stdio.h>
#include <unistd.h>
#include "main.h"
 /*
  * _isalpha - checks for alphabetic characters
  *@c : input check
  *retun :Returns 1 if c is a letter, lowercase or uppercase
  *Returns 0 otherwise
  */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
