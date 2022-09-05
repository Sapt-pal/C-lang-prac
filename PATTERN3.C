#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i, j, k, s = 4;
	for (i = 9;i >= 1;i -= 2)
	{
		for (j = 1;j <= s;j++)
		{
			printf(" ");
		}
		for (k = s;k <= 4;k++)
		{
			printf("%d",i);
		}
		s--;
		printf("\n");
	}
	getch();
}