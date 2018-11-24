#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n, arr[1000];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    while(n) {
        n--;
        printf("%d ", arr[n]);
    }
    return 0;
}
