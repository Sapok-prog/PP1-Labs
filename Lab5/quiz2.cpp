#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array_1[n][n] , diag_1 = 0, diag_2 = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> array_1[i][j];
            if(i == j){
                diag_1 += array_1[i][j];
            }
        }
    }for(int i = 0;i < n;i++){
        diag_2 += array_1[i][n - 1 - i];
    }cout << diag_1 << " " << diag_2;
    
}
