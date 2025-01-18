#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , sum = 0;
    cin >> n;
    int array[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> array[i][j];
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            sum += array[j][n - 1 - j];
        }cout << sum;
        return 0;
    }
}