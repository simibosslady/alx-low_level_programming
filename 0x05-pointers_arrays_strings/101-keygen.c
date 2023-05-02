#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/** main - generate valid random password
 * Return: 0
 */

int main(void)
{
	char password[64];
	int index = 0, sum = 0, diff_half, diff_half2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		diff_half = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			diff_half++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half))
			{
				password[index] -= diff_half;
				break;
			}
		}

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half2))
			{
				password[index] -= diff_half2;
				{
					password[index] -= diff_half2;
					break;
				}
			}
		}
		printf("%s", password);
		return (0);
	}
}
