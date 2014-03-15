#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int data = 0;
	int min = 100;
	int max = 0;

	cin >> data;
	min = data;
	max = data;

	while (cin >> data)
	{
		if (data > max) max = data;
		else if (data < min) min = data;
	}

	cout << (max - min) << endl;

	return 0;
}
