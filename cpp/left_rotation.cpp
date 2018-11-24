#include<bits/stdc++.h>

using namespace std;

vector<int> rotate_left(vector<int> a, int n, int k) {

    vector<int> temp(n);

    for(int i=0; i<n; i++) {
        temp[(n + i -k) % n] = a[i];
    }
    return temp;
}

int main() {

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    vector<int> res = rotate_left(a, n, k);
    for(int i=0; i<n; i++) {
        cout << res[i] << " ";
    }
    return 0;
}
