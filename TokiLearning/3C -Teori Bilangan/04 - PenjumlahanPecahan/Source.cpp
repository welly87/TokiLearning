#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// https://community.topcoder.com/tc?module=Static&d1=tutorials&d2=math_for_topcoders

long gcd(long a, long b)
{
	if (b == 0) return a;
	if (a == 0) return b;

	return gcd(b, a % b);
}

long lcm(long a, long b)
{
	return a * (b / gcd(a, b));
}

int main()
{
	long A, B, C, D;
	// A/B
	scanf("%ld %ld", &A, &B);
	
	// C/D
	scanf("%ld %ld", &C, &D);

	//long E, F;

	long denom = lcm(B, D);

	long E = (denom / B) * A + (denom / D) * C;
	
	long F = denom;

	long b = gcd(E, F);

	E /= b;

	F /= b;

	if (E == F)
	{
		printf("1\n");
	}
	else
	{
		printf("%ld %ld\n", E, F);
	}

	return 0;
}