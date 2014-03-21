#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long memo[1001];

int calc(long N)
{
	if (memo[N] != 0)
		return memo[N];

	if (N < 3) return 1;

	memo[N] = (calc(N - 1) % 1000000 + calc(N - 3) % 1000000) % 1000000;
	//memo[N] = calc(N - 1) + calc(N - 3);

	return memo[N];
}

int main()
{
	int N = 0;

	scanf("%d", &N);

	int result = calc(N);

	if (result > 999999)
		result %= 1000000;

	/*for (size_t i = 0; i < 1001; i++)
	{
		printf("%ld ", memo[i]);
	}
*/
	printf("%d\n", result);
	return 0;
}