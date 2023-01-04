#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
int main() 
{
	float x, y, a, b;
	for (y = 9.0; y >= -9.0; y -= 0.5)
	{
		for (x = -16.0; x <= 16.0; x += 0.2)
		{
			a = 9 * x * x - 16 * y * y - 16 * 9;
			b = x * x + y * y - 49;
			putchar((((a >= -20.0 && a <= 20.0 && x <= 6 && x >= -6) || (b >= -2.0 && b <= 2.0)) || (x >= -0.2 && x <= 0.2 && y <= 7 && y >= -7) || (y == 0.0 && x >= -7 && x <= 7)) ? '*' : ' ');
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}
