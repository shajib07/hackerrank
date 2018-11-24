#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {

    stringstream ss(str);
    vector<int> temp;
    int a;
    char c;

    while(!ss.eof()) {
        ss >> a >> c;
        temp.push_back(a);
    }
    return temp;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
