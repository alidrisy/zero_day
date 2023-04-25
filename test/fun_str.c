#include "main.h"

/**
* _strlen - return the length of string
* @s: pointer
* Return: int
*/

int _strlen(char *s)
{
int c;

for (c = 0; s[c] != 0; c++)
;
return (c);

}
