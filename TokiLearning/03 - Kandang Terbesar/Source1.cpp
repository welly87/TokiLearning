#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector< vector<char> > peta(501, vector<char>(501));
vector< vector<bool> > flag(501, vector<bool>(501));
int kolom, baris;

bool ketemu;

int bfs_iter(char n, int bk, int kk)
{
	queue< pair<int, int> > kucing;
	kucing.push(make_pair(bk, kk));
	int luaskucing = 0;

	flag[bk][kk] = true;
	while (!kucing.empty()){
		int x, y;
		luaskucing++;

		pair<int, int> current = kucing.front();

		x = current.first;
		y = current.second;

		kucing.pop();
		//kolomkucing.pop();

		if (peta[x][y] == n) { // kucing ketemu bebek. selisih wilayah = 0
			ketemu = true;
			return 0;
		}

		x++;
		if ((x >= 0) && (x < baris) && (y >= 0) && (y < kolom)){
			if ((peta[x][y] != '#') && (!flag[x][y])){
				kucing.push(make_pair(x, y));
				flag[x][y] = true;
			}
		}
		x--; x--;
		if ((x >= 0) && (x < baris) && (y >= 0) && (y < kolom)){
			if ((peta[x][y] != '#') && (!flag[x][y])){
				kucing.push(make_pair(x, y));
				flag[x][y] = true;
			}
		}
		x++; y++;
		if ((x >= 0) && (x < baris) && (y >= 0) && (y < kolom)){
			if ((peta[x][y] != '#') && (!flag[x][y])){
				kucing.push(make_pair(x, y));
				flag[x][y] = true;
			}
		}
		y--; y--;
		if ((x >= 0) && (x < baris) && (y >= 0) && (y < kolom)){
			if ((peta[x][y] != '#') && (!flag[x][y])){
				kucing.push(make_pair(x, y));
				flag[x][y] = true;
			}
		}
	}
	return luaskucing;
}

int bfs(int bk, int kk, int bb, int kb){


	int luaskucing = bfs_iter('B', bk, kk);

	if (ketemu) return 0;
	
	int luasbebek = bfs_iter('K', bb, kb);
	
	return (luaskucing - luasbebek);
}


int main(){

	char input;

	int barisk, kolomk, barisb, kolomb;
	cin >> kolom >> baris;
	int pemenang = -1;

	for (int i = 0; i < baris; i++){
		for (int l = 0; l < kolom; l++){
			cin >> input;
			if (input == 'K'){
				barisk = i;
				kolomk = l;
			}
			else if (input == 'B'){
				barisb = i;
				kolomb = l;
			}
			peta[i][l] = input;
			flag[i][l] = false;
		}
	}

	pemenang = bfs(barisk, kolomk, barisb, kolomb);
	if (pemenang == 0){
		cout << "SERI" << endl;
	}
	else if (pemenang > 0){
		cout << "K " << pemenang << endl;
	}
	else{
		cout << "B " << pemenang * -1 << endl;
	}
}