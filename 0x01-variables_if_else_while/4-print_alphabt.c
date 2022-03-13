#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Succes/correct)
 */

int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue:

else if (alphabet == 'e')
continue:

putchar(alphabet);
}

putchar ('\n');

return (0);

}
