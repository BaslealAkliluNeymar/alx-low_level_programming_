#include "main.h"

/**
* print_line - draws a straight line
* @n: number of lines on the console 
*/

voud print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
