/*
 * sherlock_anagrams.cpp
 *
 *  Created on: Mar 6, 2019
 *      Author: atahar
 */

#include <stdio.h>
#include <cstring>
#include <iostream>

using namespace std;

bool checkAnagrams(string s1, string s2) {

	int a[26] = {0};
	for (int i = 0; i < s1.length(); i++) {
		a[s1[i] - 'a']++;
	}

	for (int i = 0; i < s2.length(); i++) {
		a[s2[i] - 'a']--;
	}

	for (int i = 0; i < 26; i++) {
		if (a[i] != 0) return false;
	}
	return true;
}

int main() {

	string s[10];
	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> s[i];
	}

	for (int l = 0; l < q; l++) {

		int len = s[l].length();
		int c = 0;

		for (int k = 0; k < len - 1; k++) {

			for (int i = 0; i < len - 1; i++) {

				for (int j = i; j < len - 1; j++) {

					if (j + 1 + k >= len) break;

					if (checkAnagrams(s[l].substr(i, k+1), s[l].substr(j+1, k+1))) {
						c++;
					}
				}

			}
		}
		cout << c << endl;

	}
	return 0;
}
