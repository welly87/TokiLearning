#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stack>

char kandang[501][501];

bool visited[501][501];

using namespace std;

int N, M;

void print_kandang()
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%c", kandang[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
}

void initialize_map()
{
	memset(kandang, '.', sizeof(kandang));

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j)
				kandang[i][j] = '#';
		}
	}

	kandang[0][N - 1] = 'K';
	kandang[M - 1][0] = 'B';
}

int flood_fill_it(int i, int j)
{
	int result = 0;

	stack< pair<int, int> > s;

	memset(visited, false, sizeof(visited));

	s.push(make_pair(i, j));

	while (!s.empty())
	{
		pair<int, int> top = s.top();
		s.pop();

		if (top.first < 0 || top.second < 0 || top.first >= M || top.second >= N)
			continue;

		char current = kandang[top.first][top.second];

		if (current == '#' || visited[top.first][top.second]) continue; // || current == 'K' || current == 'B'

		visited[top.first][top.second] = true;
		//kandang[top.first][top.second] = '#';

		result++;

		s.push(make_pair(top.first + 1, top.second));
		s.push(make_pair(top.first - 1, top.second));
		s.push(make_pair(top.first, top.second + 1));
		s.push(make_pair(top.first, top.second - 1));
	}

	//print_kandang();

	return result;
}

int flood_fill_rec(int i, int j)
{
	if (i < 0 || j < 0 || i >= M || j >= N)
		return 0;

	if (kandang[i][j] == '.')
	{
		kandang[i][j] = '#';
		return 1 + flood_fill_rec(i + 1, j) + flood_fill_rec(i - 1, j) + flood_fill_rec(i, j + 1) + flood_fill_rec(i, j - 1);
	}
	
	return 0;
}

int main2()
{
	/*N = M = 100;
	initialize_map();*/
	//print_kandang();

	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++)
	{
		scanf("%s", &kandang[i]);
	}

	int found = 0;
	int bebek = 0;
	int kucing = 0;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (kandang[i][j] == 'B')
			{
				kandang[i][j] = '.';
				bebek = flood_fill_it(i, j);
				kandang[i][j] = 'B';
				found++;
			}
			else if (kandang[i][j] == 'K')
			{
				kandang[i][j] = '.';
				kucing = flood_fill_it(i, j);
				kandang[i][j] = 'K';
				found++;
			}

			if (found == 2)
				break;
		}
	}

	//printf("%d %d\n", bebek, kucing);

	if (bebek > kucing)
		printf("B %d\n", bebek - kucing);
	else if (bebek < kucing)
		printf("K %d\n", kucing - bebek);
	else
		printf("SERI\n");

	return 0;
}