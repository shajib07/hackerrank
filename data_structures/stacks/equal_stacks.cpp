/*
 * equal_stacks.cpp
 *
 *  Created on: Mar 9, 2019
 *      Author: atahar
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int sum1 = 0, sum2 = 0, sum3 = 0;
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    vector<int> t1(n1), t2(n2), t3(n3);

    for (int i = 0; i < n1; i++) {
        cin >> t1[i];
        sum1 += t1[i];
    }

    for (int i = 0; i < n2; i++) {
        cin >> t2[i];
        sum2 += t2[i];
    }

    for (int i = 0; i < n3; i++) {
        cin >> t3[i];
        sum3 += t3[i];
    }

    int r1 = 0, r2 = 0, r3 = 0;
    while (sum1 != sum2 || sum2 != sum3 || sum1 != sum3) {

        if (sum1 >= sum2 && sum1 >= sum3) {
            sum1 -= t1[r1];
            r1++;
        }
        else if (sum2 >= sum1 && sum2 >= sum3) {
            sum2 -= t2[r2];
            r2++;
        }
        else if (sum3 >= sum1 && sum3 >= sum2) {
            sum3 -= t3[r3];
            r3++;
        }
    }

    cout << sum1;
    return 0;
}
