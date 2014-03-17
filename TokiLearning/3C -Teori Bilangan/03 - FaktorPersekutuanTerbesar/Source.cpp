#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long fpb(long a, long b) 
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	return fpb(b, a % b);
}

int main() 
{
	int N = 0;
	scanf("%d", &N);

	long A = 0, B = 0;

	for (int i = 0; i < N; i++)
	{
		scanf("%ld %ld", &A, &B);
		printf("%ld\n", fpb(A, B));
	}


	return 0;
}