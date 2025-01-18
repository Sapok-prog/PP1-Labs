#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string array[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            array[i][j] = ".";
        }
    }
    
    if(n % 2 == 0){
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if(i >= j){
                    array[i][j] = "#";
                }
            }
        }
    }else{
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if(i >= j){
                    array[i][n - j - 1] = "#";
                }
            }
        }
    }for(int i = 0;i < n;i++){
             for(int j = 0;j < n;j++){
                cout << array[i][j];
            }cout << '\n';
    }return 0;
}