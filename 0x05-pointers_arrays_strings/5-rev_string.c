#include "main.h"
/**
 * rev_string - prints a reverse string
 *@s: A pointer to an int that will be changed
 *
 *Return: void
 */

void rev_string(char *s)
{
char *start_c, *end_c, c;
int j, count;
int length = 0;

for (j = 0; s[j]; j++)
{
length++;
}

count = length;

start_c = s;
end_c = s;

for (j = 0; j < count - 1; j++)
{
end_c++;
}

for (j = 0; j < count / 2; j++)
{

c = *end_c;
*end_c = *start_c;
*start_c = c;

start_c++;
end_c--;
}
}
