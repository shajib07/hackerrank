#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n;
    cin >> n;
    long long int a;
    vector<long long int> v;

    for(int i=0; i<n;i++) {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n;i++) {
        cout << v[i] << " ";
    }
    return 0;
}
