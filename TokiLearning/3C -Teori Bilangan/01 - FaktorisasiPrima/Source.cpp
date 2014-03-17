#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

bool isPrima(long num)
{
	if (num <= 1) return false;
	if (num == 2) return true;
	if (num % 2 == 0) return false;

	for (int i = 3; i * i <= num; i += 2)
	{
		if (num % i == 0) return false;
	}

	return true;
}

int main()
{
	long N = 0;

	scanf("%d", &N);
	
	if (N == 1)
	{
		printf("%ld\n", N);
		return 0;
	}
	else if (isPrima(N))
	{
		printf("%ld\n", N);
		return 0;
	}

	bool next = false;
	long current = N;

	for (long i = 2; i <= N; i++)
	{
		if (isPrima(i) && (current % i == 0))
		{
			current /= i;

			int count = 1;

			while ((current % i == 0) && current > 0)
			{
				current /= i;
				count++;
			}

			if (next)
				printf(" X ");
			else
				next = true;

			if (count == 1)
				printf("%d", i, count);
			else
				printf("%d^%d", i, count);
		}
	}

	printf("\n");

	return 0;
}