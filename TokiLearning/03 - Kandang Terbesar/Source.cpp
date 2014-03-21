#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int tukar(int N)
{
	if (N <= 1) 
		return 1;
	
	return tukar(N / 2) + tukar(N / 3) + tukar(N / 4);
}

int main()
{
	int N = 0;
	scanf("%d", &N);
	printf("%d\n", tukar(N));

	return 0;
}