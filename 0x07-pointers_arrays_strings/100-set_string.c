#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* set_string - function that sets the value of a pointer to a char
* @s: pointer to a pointer
* @to: pointer
* Return:  returns 0 (nothing expected)
*/
void set_string(char **s, char *to)
{
	*s = to;

}
