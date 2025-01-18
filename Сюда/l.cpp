#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m ;
    int sum = 0, f = 0;
    cin >> n >> m;
    int drop[n][m] , summ[n];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> drop[i][j];
            sum += drop[i][j];
        }summ[f] = sum;
        f++;
        sum = 0;
    }
    int min = INT_MAX;
    int index = 0;
    for(int i = 0;i < n;i++){
        if(min > summ[i]){
            index = i;
            min = summ[i];
        }else if(min == summ[i]){
            continue;
        }
    }cout << index + 1; 
    return 0;
}