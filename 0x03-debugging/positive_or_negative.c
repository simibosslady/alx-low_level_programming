#include "main.h"
/**
 * positive_or_negative - No positive or negative number
 * 0 : is the number to check
 * @i: parameter
 * Return: 0 (sucess)
 *  more headers goes there
 */

void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
return;
}
