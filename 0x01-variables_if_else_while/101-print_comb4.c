#include <stdio.h>
/**
 * main - entry point
 * description - print three numbers
 * Return: 0
 */
int main(void)
{
	int n = '0';
	int m = '0';
	int l = '0';

	while (n <= '7')
	{
		while (m <= '8')
		{
			while (l <= '9')
			{
				if (n < m && m < l)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (!(n == '7' && m == '8' && l == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;
			}
			l = '0';
			m++;
		}
		m = '0';
		n++;
	}
	putchar('\n');
	return (0);
}

