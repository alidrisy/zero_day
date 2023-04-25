#include "main.h"

/**
* fun_string - print string
* @arg: a string
* Return: 1
*/

int fun_string(va_list arg)
{
char *s;
int i, len;

s = va_arg(arg, char *);
if (s == NULL)
{
s = "(null)";
len = _strlen(s);
for (i = 0; i < len; i++)
_putchar(s[i]);
return (len);
}
else
{
len = _strlen(s);
for (i = 0; i < len; i++)
_putchar(s[i]);
return (len);
}
}
