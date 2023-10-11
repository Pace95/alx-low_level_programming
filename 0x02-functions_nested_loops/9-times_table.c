#include "main.h"
#include <stdio.h>
/**
 * times_table - zero to nine timestable
 *  
 *  Return: 0
 */
void times_table(void)
{
	 int x, n, r;

	 for (x = 0; x < 10; x++)
	 {
	 for (n = 0; n < 10; n++)
	 {
	 r = x * n;
	 if (n == 0)
	 printf("%d, ", r);
	 else
	 {
	 printf("%2d", r);
	 if (n != 9)
	 printf(", ");
	 }
	 }
	 printf("\n");
	 }
}
