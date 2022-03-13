#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
int z;

for (z = 48; z <= 57; z++)
{
putchar(z);

if (z == 57)
{
break;
}

putchar(' ');
purchar(',');
}

putchar('\n');

return (0);

}
