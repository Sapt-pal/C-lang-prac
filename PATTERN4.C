#include <stdio.h>
#include <conio.h>
void main()
{
	int i, j, k, st = 1;
	for (i = 1;i <= 5;i++)
	{
		for (j = 4;j >= i;j--)
		{
			printf(" ");
		}
		for (k = 1;k <= st;k++)
		{
			printf("*");
		}
		st += 2;
		printf("\n");
	}
	getch();
}
