#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , f = 0, x = 0 , y = 0;
    cin >> n;
    int matrix[n][n], diag[n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> matrix[i][j];
            if(i == j){
                diag[f] = matrix[i][j];
                f++;
            }
        }
    }
    
    
    sort(diag , diag + n);
    int max = diag[n - 1];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i == j && matrix[i][j] == max){
                cout << "Maximum element is: " << max << " with coordinates: "<< i + 1 << ";" << j + 1;
                return 0;
            }
        }
    }
}