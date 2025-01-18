#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , sum = 0;
    cin >> n;
    string array[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> array[i][j];
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            array[i][0] = "*";
            array[0][j] = "*";
            array[i][n - 1] = "*";
            array[n - 1][j] = "*";
            array[j][n - 1 -j] = "*";
            if(i == j){
                array[i][j] = "*";
            }
        }
    }for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){ 
            if(array[i][j] != "*"){
                sum += stoi(array[i][j]);
            }
        }
    }for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout << " " << array[i][j] << "  ";
        }cout << endl;
    }cout << sum;
    return 0;
}