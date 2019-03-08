#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n, count;
	cin >> n;
	string str[10];

	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	for (int i = 0; i < n; i++) {

		count = 0;
		int len = str[i].length() / 2;
		
		for (int j = 0; j < len; j++) {
			int idx = str[i].length() - 1 - j;
			int a = str[i][j] - 'a';
			int b = str[i][idx] - 'a';
			count += abs(a - b);
		}

		cout << count << endl;
	}
}
