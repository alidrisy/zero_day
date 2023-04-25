#include "main.h"

/**
* fun_character - print cahr
* @arg: a character
* Return: 1;
*/

int fun_character(va_list arg)
{
char s;

s = va_arg(arg, int);
_putchar(s);
return (1);
}
