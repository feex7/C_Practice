#include <stdio.h>
int main()
{
	for (int a = 1; a <= 9; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			printf("%d*%d=%d\t", b, a, a * b);
		}
		printf("\n\n");
	}
	return 0;
}