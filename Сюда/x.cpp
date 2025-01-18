#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , max = INT_MIN;
    cin >> n;
    int array[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> array[i][j];
            if(max < array[i][j]){
                max = array[i][j];
            }
        }
    }for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(max == array[i][j]){
                array[i][j] = INT_MIN;
            }
        }
    }
    
    max = INT_MIN;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(max < array[i][j]){
                max = array[i][j];
            }
        }
    }if(max == INT_MIN){
        max = 0;
    }
    cout << max;
    return 0;
}