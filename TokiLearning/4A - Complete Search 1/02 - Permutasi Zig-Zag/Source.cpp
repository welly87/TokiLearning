#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

bool used[10];

int candidate[10];

int N;

void print_candidate()
{
	for (int i = 1; i <= N; i++)
		printf("%d", candidate[i]);

	printf("\n");
}

bool is_satisfied(int i, int depth)
{
	if (depth < 3) return true;
	
	int left = candidate[depth - 2];
	int mid = candidate[depth - 1];
	int right = i;

	return (mid > right && mid > left) || (mid < right && mid < left);
	
}

void permutasi(int depth)
{
	for (int i = 1; i <= N; i++)
	{
		if (used[i]) continue;

		if (!is_satisfied(i, depth)) continue;
		
		used[i] = true;

		candidate[depth] = i;

		if (depth == N)
			print_candidate();
		else
			permutasi(depth + 1);

		used[i] = false;
	}
}

int main()
{
	scanf("%d", &N);

	permutasi(1);

	return 0;
}