#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, max = INT_MIN;
    cin >> n;
    int pazzle[n][n] , pazzle_max[n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> pazzle[i][j];
        }
    }


    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(max < pazzle[i][j]){
                max = pazzle[i][j];
            }
        }pazzle_max[i] = max;
        max = INT_MIN; 
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            pazzle[i][j] = pazzle_max[i];
            cout << pazzle[i][j] << " ";
        }cout << '\n';
    }
}