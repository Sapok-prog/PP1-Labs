#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, odd = 1;
    cin >> n;
    int war[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i == 0){
                war[0][j] = 1;
            }else{
                war[i][j] = odd;
            }
        }odd += 2;
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout << war[i][j] << " ";
        }cout << '\n';
    }
}