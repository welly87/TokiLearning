#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int numbers[1000];

int main()
{
	int N = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &numbers[i]);
	}

	int operasi = 0;
	for (int i = 0; i < N; i++)
	{
		int minIdx = i;
		for (int j = i + 1; j < N; j++)
		{
			int current = numbers[minIdx];

			if (numbers[j] < current)
			{
				minIdx = j;
			}
		}

		if (minIdx == i) continue;

		int temp = numbers[minIdx];
		numbers[minIdx] = numbers[i];
		numbers[i] = temp;
		operasi++;
	}

	printf("%d\n", operasi);
	return 0;
}