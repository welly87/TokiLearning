#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int gelas[100001];

void swapGelas(int gelas1, int gelas2)
{
	int temp = gelas[gelas2];
	gelas[gelas2] = gelas[gelas1];
	gelas[gelas1] = temp;
}

int main()
{

	int N; // banyak gelas
	int M; // banyak penukaran
	
	cin >> N >> M;
	
	for (size_t i = 1; i <= N; i++)
	{
		gelas[i] = i;
	}

	for (size_t i = 0; i < M; i++)
	{
		int gelas1 = 0;
		int gelas2 = 0;

		scanf("%d %d", &gelas1, &gelas2);
		//cin >> gelas1 >> gelas2;

		swapGelas(gelas1, gelas2);
	}
	
	int Q; // banyak tebakan

	cin >> Q;

	for (size_t i = 0; i < Q; i++)
	{
		int posisiAkhirGelas = 0;

		scanf("%d", &posisiAkhirGelas);
		//cin >> posisiAkhirGelas;

		printf("%d\n", gelas[posisiAkhirGelas]);
		//cout << gelas[posisiAkhirGelas] << endl;
	}

	return 0;
}
