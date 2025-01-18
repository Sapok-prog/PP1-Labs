#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m , k = 0;
    cin >> n >> m;
    int matrix[n][m];
    int transpose_matrix[n * m];

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> matrix[i][j];
            transpose_matrix[k] = matrix[i][j];
            k++;
        }
    }k = 0;
    int a = n;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(j == 0){
                matrix[i][j] = transpose_matrix[k];
                k++;
            }else{
                matrix[i][j] = transpose_matrix[i + a];
                a += n;
            }
        }a = n;
    }for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout << matrix[i][j] << " ";
        }cout << '\n';
    }return 0;
}