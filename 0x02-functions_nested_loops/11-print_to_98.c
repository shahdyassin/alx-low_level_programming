#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 * separated by comma, followed
 * by space and number should be
 * printed in order
 *
 * @n: input
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = 0; n <= 98; n++)
{
_putchar(n);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
else if (n == 98)
{
_putchar(n);
_putchar('\n');
}
else
{
for (n = 0; n > 98; n--)
{
_putchar(n);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
