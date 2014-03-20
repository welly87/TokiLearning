#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int N = 0;

	scanf("%d", &N);
	int count = 0;

	//for (int i = 1; i <= N; i++)
	//{
	//	int j = i;
	//	while (j % 5 == 0)
	//	{
	//		j /= 5;
	//		count++;
	//	}
	//}

	int i = 5;

	while (i <= N)
	{
		count += N / i;
		i *= 5;
	}

	printf("%d\n", count);
	return 0;
}