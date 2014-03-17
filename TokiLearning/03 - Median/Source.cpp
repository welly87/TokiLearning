#define _CRT_SECURE_NO_WARNINGS
#define RANGE 8000
#define NOTSET 8001
#define MAX_N 2000000

#include <stdio.h>
#include <string.h>

int numbers_count[2 * RANGE + 2];

int numbers[MAX_N];

int main()
{
	long N = 0;

	scanf("%ld", &N);
	
	int max = -8001;
	int min = 8001;

	for (int i = 0; i < N; i++)
	{
		int idx = 0;
		scanf("%d", &idx);
		
		if (idx > max) max = idx;
		if (idx < min) min = idx;
		
		numbers_count[idx + RANGE]++;
	}

	int count = 0;

	for (int i = min; i <= max; i++)
	{
		if (numbers_count[i + RANGE] == 0) continue;
		
		for (int j = 0; j < numbers_count[i + RANGE]; j++)
		{
			numbers[count++] = i;
		}
	}

	if (N % 2 == 0)
	{
		int mid = N / 2;
		int first = numbers[mid - 1];
		int second = numbers[mid];
		
		printf("%0.2f\n", (first + second) / 2.0);
	}
	else
	{
		int mid = N+1 / 2;
		printf("%d\n", numbers[mid-1]);
	}
	
	return 0;
}