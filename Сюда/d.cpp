#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i == 0){
                array[i][j] = j;
            }else if(j == 0){
                array[i][j] = i;
            }else{
                array[i][j] = 0;
            }
        }
    }for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(j == i){
                array[i][j] = i * j;
            }cout << array[i][j] << " ";
        }cout << '\n';
    }
}
    
