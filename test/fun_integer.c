#include "main.h"

/**
* fun_integer - print a number.
* @args:  a variable.
* Return: int
*/

int fun_integer(va_list args)
{
int a = va_arg(args, int);
int b, c = a % 10, d, e = 1;
int i = 1;
a = a / 10;
b = a;
if (c < 0)
{
_putchar('-');
b = -b;
a = -a;
c = -c;
i++;
}

if (b > 0)
{
while (b / 10 != 0)
{
e *=  10;
b /= 10;
}

b = a;
while (e > 0)
{
d = b / e;
_putchar(d + '0');
b -= (d *e);
e /= 10;
i++;
}
}
_putchar(c + '0');
return (i);
}
