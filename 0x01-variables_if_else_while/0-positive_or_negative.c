#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always O (Success/correct)
 */

int main(void)
{
int n;

srand(time(O));
n = rand() - RAND_MAX / 2;

if (n==O)
{
printf("%i is zero\n", n);
}

else if (n<O)
{
printf("%i is negative\n", n);
}

else
{
printf("%i is positive\n", n);
}

return (O);

}
