#include <stdio.h>
/**
 * main - to print alphabets in lower case except q and e
 * Return: 0
 */
int main(void)
{
	int n = 97;
		while (n <= 122)
		{
			if (n == 101 || n == 113)
			{
				n++;
				continue;
			}
			putchar(n);
			n++;
		}
	putchar('\n');
return (0);
}
