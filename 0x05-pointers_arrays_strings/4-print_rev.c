#include "main.h"

/**
 * prints_rev - prints a string in reverse order
 *@s: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void print_rev(char *s)
{
int j;

j = 0;
while (s[j] != '\0')
{
j++;
}

for (j = j - 1 ; j >= 0; j--)
{
_putchar (s[j]);
}

_putchar ('\n');
}
