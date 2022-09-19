#include "main.h"

/**
 * is_numerical - check if it is a digit
 * @n: Number
 * Return: If is a number, return 1 else return 0
 */
int is_numerical(unsigned int n)
{
return (n >= '0' && n <= '9');
}

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
