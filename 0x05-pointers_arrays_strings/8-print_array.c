#include "main.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an array of integers
 *@a: A pointer to an int will be updated/ changed
 *@n: return value n
 *Return: void which means our answer is correct
 */

void print_array(int *a, int n)

{
int j;

j = 0;
while (j < n)
{
printf("%d", a[j]);

if (j < n - 1)
{
printf(", ");
}

j++;
}

printf("\n");
}
