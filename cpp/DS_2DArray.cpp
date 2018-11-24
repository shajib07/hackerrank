#include<bits/stdc++.h>
using namespace std;

int main(){

    int ar[10][10], max_sum = INT_MIN;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)cin >> ar[i][j];
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            int sum = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i+1][j+1] + ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];
            max_sum = max(max_sum, sum);
        }
    }
    cout << max_sum << endl;
    return 0;
}
