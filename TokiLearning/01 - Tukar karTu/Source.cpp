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
		for (int j = 0; j < N - 1; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				int temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
				operasi++;
			}
		}
	}

	printf("%d\n", operasi);
	return 0;
}