#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<long long int> v;
    int n;
    cin>>n;
    long long int a;

    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }

    int q1, q2, q3;
    cin>>q1;
    cin>>q2;
    cin>>q3;

    v.erase(v.begin() + (q1-1));
    v.erase(v.begin() + (q2-1), v.begin() + (q3-1));

    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}

