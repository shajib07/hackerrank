#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

#define MAX 26

int anagram(string s) {

	int ans = 0;

	int count[26] = {0};
	string s1 = s.substr(0, s.length()/2);
	string s2 = s.substr(s.length()/2, s.length());

	for(unsigned i = 0; i < s1.length(); i++) {
		count[s1[i] - 'a']++;
	}
	for(unsigned i = 0; i < s2.length(); i++) {
		count[s2[i] - 'a']--;
	}

	for(int i = 0; i < 26; i++) {
		if (count[i] > 0)
			ans += count[i];
	}
	return ans;
}

int main() {
	int n;
	string s[100];
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> s[i];
	}

	for(int i=0; i<n; i++) {

		if(s[i].length() % 2 != 0) {
			cout << -1 << endl;
			continue;
		}
		cout << anagram(s[i]) << endl;
	}
	
	return 0;
}
