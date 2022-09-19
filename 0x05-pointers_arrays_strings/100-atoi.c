#include "main.h"

/**
 * _atoi - convert a string to an integer
 *@s: String
 * Return: Return the num
 */

int _atoi(char *s)
{
unsigned int number, j;
int sign;

sign = 1;
number = 0;

for (j = 0; s[j] != '\0'; j++)
{
if (is_numerical(s[j]))
{
number = (s[j] - 48) + number * 10;

if (s[j + 1] == ' ')
break;
}
else if (s[j] == '-')
{
sign *= -1;
}

}

return (number * sign);

}
