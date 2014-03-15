#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	long x = 0, y = 0;

	scanf("%ld %ld", &x, &y);

	long lantai = 0;
	long long jumlah = 0;

	while (x > y)
	{
		long max = 0;
		for (long i = 1; i <= y; i++)
		{
			long tinggiKucing = 0;

			scanf("%ld", &tinggiKucing);

			if (tinggiKucing > max)
			{
				max = tinggiKucing;
			}
		}

		lantai++;
		x -= y;
		jumlah += max;
	}

	// calculate the rest
	long max = 0;

	for (long i = 1; i <= x; i++)
	{
		long tinggiKucing = 0;

		scanf("%ld", &tinggiKucing);

		if (tinggiKucing > max)
		{
			max = tinggiKucing;
		}
	}

	jumlah += max + lantai + 2;

	printf("%ld\n", jumlah);

	return 0;
}
