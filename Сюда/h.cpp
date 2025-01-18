#include <bits/stdc++.h>
using namespace std;
int main(){
    int players , games , sum = 0;
    cin >> players >> games;
    int points[players][games], summ[players];
    
    
    for(int i = 0;i < players;i++){
        for(int j = 0;j < games;j++){
            cin >> points[i][j];
            sum += points[i][j];
        }summ[i] = sum;
        sum = 0;
    }
    int max = INT_MIN;
    for(int i = 0; i < players;i++){
        if(max < summ[i]){
            max = summ[i];
        }
    }cout << max;
}