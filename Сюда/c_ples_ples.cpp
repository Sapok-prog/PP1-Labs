#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int matrix[n][n];
    int diag[n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> matrix[i][j];
            if(i == j){
                diag[i] = matrix[i][j];
            }
        }
    }
    int max = diag[0];
    int coord = 1;
    for(int i = 0;i < n;i++){
        if(diag[i] >= max){
            max = diag[i];
            coord++;
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << coord << ";" << coord;

}