#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include <map>
#include <algorithm>

using namespace std;


int main() {

    map<string, int> m;
    int n, a, val;
    string key;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> a;
        cin >> key;

        switch(a) {
            case 1:
                cin >> val;
                m[key] += val;
                break;
            case 2:
                m.erase(key);
                break;
            case 3:
                map<string, int>::iterator itr = m.find(key);
                if(itr == m.end()) cout << "0" << endl;
                else cout << m[key] << endl;
                break;
        }
    }
    return 0;
}

