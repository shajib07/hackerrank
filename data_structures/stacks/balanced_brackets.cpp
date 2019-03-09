#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;

void isBalanced(string s) {

    stack<char> st;
    
    for (int i = 0; i < s.length(); i++) {
        switch(s[i]) {
            case '[':
            case '{':
            case '(':
                st.push(s[i]);
                break;
            case ']':
                if (st.empty() || st.top() != '[') {
                    cout << "NO" << endl;
                    return;
                }
                st.pop();
                break;
            case '}':
                if (st.empty() || st.top() != '{') {
                    cout << "NO" << endl;
                    return;
                }
                st.pop();
                break;
            case ')':
                if (st.empty() || st.top() != '(') {
                    cout << "NO" << endl;
                    return;
                }
                st.pop();
                break;
        }
    }

    if(st.empty()) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
}

int main() {
    int n;
    cin >> n;
    string str[n];
    for (int l = 0; l < n; l++) {
        cin >> str[l];
    }

    for (int l = 0; l < n; l++) {
        isBalanced(str[l]);
    }
    return 0;
}
