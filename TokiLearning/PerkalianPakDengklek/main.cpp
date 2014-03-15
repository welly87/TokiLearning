#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int to_int(char c) {
	return c - '0';
}

int main()
{
	string first;
	string second;

	cin >> first;
	cin >> second;

	/*cout << first << endl;

	cout << second << endl;
	*/
	long total = 0;
	for (size_t i = 0; i < first.length(); i++)
	{
		for (size_t j = 0; j < second.length(); j++)
		{
			total += to_int(first[i]) * to_int(second[j]);
		}
	}
	cout << total << endl;
	return 0;
}
