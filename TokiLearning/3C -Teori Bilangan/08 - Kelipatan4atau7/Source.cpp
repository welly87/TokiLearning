#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int memos[1001001];

void precalc(int N)
{
	int sum = 0;

	for (size_t i = 1; i <= N; i++)
	{
		if ((i % 4 == 0) || (i % 7 == 0))
		{
			sum += i;
		}

		memos[i] = sum;
	}
}

int main()
{
	
	precalc(1001000);

	int T = 0;
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++)
	{
		int N = 0;

		scanf("%d", &N);

		printf("%d\n", memos[N]);
	}
	return 0;
}