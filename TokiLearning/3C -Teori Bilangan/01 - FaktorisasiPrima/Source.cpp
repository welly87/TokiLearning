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
	
	if (isPrima(N))
	{
		printf("%ld\n", N);
		return 0;
	}

	bool next = false;
	//long current = N;

	for (long i = 2; i * i <= N && N != 1; i++)
	{
		if (isPrima(i) && (N % i == 0))
		{
			N /= i;

			long count = 1;

			while (N % i == 0)
			{
				N /= i;
				count++;
			}

			if (next)
				printf(" X ");
			else
				next = true;

			if (count == 1)
				printf("%ld", i, count);
			else
				printf("%ld^%ld", i, count);
		}
	}

	if (N != 1)
	{
		if (next)
			printf(" X ");
		else
			next = true;

		printf("%ld", N);
	}


	printf("\n");

	return 0;
}