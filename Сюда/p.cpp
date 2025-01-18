#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int table[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            table[0][j] = j;
            table[j][0] = j;
            if(i > 0 && j > 0){
                table[i][j] = i * j;
            }
        }
    }for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout << table[i][j] << " ";
        }cout << endl;
    }
}