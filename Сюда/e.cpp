#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , k = 0, sum = 0;
    cin >> n;
    int matrix[n][n] , matrix_copy[n][n] ,transpose_matrix[n * n];

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> matrix[i][j];
            matrix_copy[i][j] = matrix[i][j];
            transpose_matrix[k] = matrix[i][j];
            k++;
        }
    }k = 0;
    int a = n;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(j == 0){
                matrix[i][j] = transpose_matrix[k];
                k++;
            }else{
                matrix[i][j]= transpose_matrix[i + a];
                a = a + n;
            }
        }a = n;
    }for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(matrix[i][j] == matrix_copy[i][j]){
                sum++;
            }
        }
    }

    if(sum == n * n){
        cout << "Perfect.";
    }else{
        cout << "Not perfect.";
    }
}