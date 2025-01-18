#include <bits/stdc++.h>
using namespace std;
int main(){
    int row , column , sum = 0;
    cin >> row >> column;
    int array[row][column];

    for(int i = 0;i < row;i++){
        for(int j = 0;j < column;j++){
            cin >> array[i][j];
            if(array[i][j] < 0){
                sum++;
            }
        }
    }cout << sum;
    return 0;
}