#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , max = INT_MIN;
    cin >> n;
    int array[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> array[i][j];
            if(array[i][j] > max){
                max = array[i][j];
            }
        }
    }for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(array[i][j] == max){
                cout << i + 1 << " " << j + 1;
                return 0;
            }
        }
    }return 0;
}