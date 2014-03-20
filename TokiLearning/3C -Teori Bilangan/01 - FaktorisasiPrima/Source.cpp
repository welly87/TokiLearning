#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int N = 0;

	scanf("%d", &N);

	int factor = 2;
	bool firstime = true;

	if (N == 1)
	{
		printf("1\n");
		return 0;
	}

	while (N != 1)
	{
		int count = 0;

		while (N % factor == 0)
		{
			N /= factor;
			count++;
		}

		if (count != 0 && !firstime)
		{
			printf(" x ");
		}

		if (count == 1)
		{
			printf("%d", factor, count);
			firstime = false;
		}
		else if (count > 1)
		{
			printf("%d^%d", factor, count);
			firstime = false;
		}

		factor++;
	}

	printf("\n");

	return 0;
}