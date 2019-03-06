#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

#define MAX 26

int main() {
	
  	int ans = 0;
	int count[MAX] = {0};
	string s1, s2;
	cin >> s1 >> s2;

	for(unsigned int i = 0; i < s1.length(); i++) {
		count[s1[i] - 'a']++;
	}

	for(unsigned i = 0; i < s2.length(); i++) {
		count[s2[i] - 'a']--;
	}

	for(int i = 0; i < MAX; i++) {
		ans += abs(count[i]);
	}
  
	cout << ans << endl;
	return 0;
}
