/*
 * highest_val_palidrome.cpp
 *
 *  Created on: Mar 6, 2019
 *      Author: atahar
 */
#include <cstring>
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {

	int n, l;
	string s;
	cin >> l >> n;
	cin >> s;
	int c = 0;

	string s1 = s.substr(0, s.length()/2);
	string s2 = s.substr(s.length()/2, s.length());
	reverse(s2.begin(), s2.end());
	int a1[s1.length()] = {0}, a2[s1.length()] = {0};

	for(unsigned i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i]) {
			c++;
			int a = s1[i] - '0';
			int b = s2[i] - '0';
			if (a > b) {
				s2[i] = s1[i];
				a2[i] = 1;
			} else {
				s1[i] = s2[i];
				a1[i] = 1;
			}
		}
	}
	if (c > n) {
		cout << -1;
		return 0;
	}

	if (c != n && s.length() % 2 != 0 && s2.length() > 0 && s2[s2.length()] != '9') {
		c++;
		s2[s2.length()-1] = '9';
	}

	for(unsigned i = 0; i < s1.length(); i++) {
		if (c >= n) break;

		if (a1[i] == 0) c++;
		if (a2[i] == 0) c++;
		s1[i] = '9';
		s2[i] = '9';
	}

	reverse(s2.begin(), s2.end());

	cout << s1  + s2;
	return 0;
}
