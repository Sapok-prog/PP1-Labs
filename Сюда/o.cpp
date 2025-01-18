#include <bits/stdc++.h>
using namespace std;
int main(){
    int row , column , f = 0 , x , y , sum = 0;
    cin >> row >> column;
    int array[row][column] , minimum[column] , array_giant[row * column];
    for(int i = 0;i < row;i++){
        for(int j = 0;j < column;j++){
            cin >> array[i][j];
        }
    }
    cout << "coordinates of min elements: " << '\n';
    int min = INT_MAX;
    f = 0;
    for(int i = 0;i < column;i++){
        for(int j = 0;j < row;j++){
            if(min > array[j][i]){
                min = array[j][i];
            }
        }minimum[f] = min;
        min = INT_MAX;
        f++;
    }
    for(int i = 0;i < f;i++){
        sum += minimum[i];
    }f = 0;



    cout << "coordinates of min elements: " << '\n';
    for(int i = 0;i < column;i++){
        for(int j = 0;j < row;j++){
            if(array[j][i] == minimum[f]){
                x = j + 1;
                y = i + 1 ;
                cout << x << ";" << y << '\n';
                f++;
            }
        }
    }cout << " " << '\n';
    cout << "Their sum:" << '\n';
    cout << sum;
    return 0; 
}