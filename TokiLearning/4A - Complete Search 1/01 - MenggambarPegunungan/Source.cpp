#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void gambar(int N)
{
	if (N == 1)
		printf("*\n");
	else if (N >= 2)
	{
		gambar(N - 1);

		for (int i = 0; i < N; i++)
			printf("*");
		printf("\n");

		gambar(N - 1);
	}		
}

int main()
{
	int N = 0;
	scanf("%d", &N);

	gambar(N);

	return 0;
}