#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

long primes[77778];

bool candidates[1000001];

int count = 0;

void sieve(long num)
{
	count = 1;

	memset(candidates, true, sizeof(candidates));

	primes[0] = false;
	primes[1] = false;

	long i = 0;
	for (i = 2; i * i <= num; i++)
	{
		if (candidates[i])
		{
			primes[count++] = i;

			for (long j = i*i; j <= num; j += i)
			{
				candidates[j] = false;
			}
		}
	}

	for (; i <= num; i++)
	{
		if (candidates[i])
		{
			primes[count++] = i;
		}
	}

}

int main()
{
	sieve(1000000);

	int N = 0;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++)
	{
		int idx = 0;
		scanf("%d", &idx);
		printf("%ld\n", primes[idx]);
	}

	return 0;
}