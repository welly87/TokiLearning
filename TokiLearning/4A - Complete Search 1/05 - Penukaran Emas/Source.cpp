#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int x, int y)
{
	return x >= y ? x : y;
}

int tukar(int N)
{
	if (N <= 1)
		return N;

	int nextry = tukar(N / 2) + tukar(N / 3) + tukar(N / 4);

	return max(nextry, N);
}

int main()
{
	int N = 0;
	scanf("%d", &N);
	printf("%d\n", tukar(N));

	return 0;
}