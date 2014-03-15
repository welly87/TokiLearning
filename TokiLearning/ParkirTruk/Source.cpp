#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int waktu[101];
int ongkos[4];

void parkirDiRentangWaktu(int awal, int akhir) 
{
	for (size_t i = awal + 1; i <= akhir; i++)
	{
		waktu[i]++;
	}
}

int main()
{
	int ongkos[4];
	
	scanf("%d %d %d", &ongkos[1], &ongkos[2], &ongkos[3]);

	for (size_t i = 0; i < 3; i++)
	{
		int awal = 0;
		int akhir = 0;

		scanf("%d %d", &awal, &akhir);

		parkirDiRentangWaktu(awal, akhir);
	}

	int total = 0;
	for (size_t i = 0; i < 101; i++)
	{
		total += waktu[i] * ongkos[waktu[i]];
	}

	printf("%d\n", total);

	return 0;
}
