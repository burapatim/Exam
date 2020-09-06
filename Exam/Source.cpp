#include<stdio.h>
int main()
{
	int sum;
	for (int x = 1;x <= 10000;x++)
	{
		sum = 0;
		for (int a = 1;a < x;a++)
		{
			if (x % a == 0)
			{
				sum += a;
			}
		}
		if (sum == x)
		{
			printf("%d ", x);
		}
	}
	return 0;
}
