#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int money[] = { 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };

int main()
{
	int K = 0;

	scanf("%d", &K);

	for (int i = 0; i < 10; i++)
	{
		int current = money[i];

		if (current <= K)
		{
			int hasil = K / current;
			K %= current;

			printf("%d %d\n", current, hasil);
		}
	}

	return 0;
}