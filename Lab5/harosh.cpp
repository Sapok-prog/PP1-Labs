#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , cnt = 0;
    cin >> n;
    int array[n];
    for(int i = 0;i < n;i++){
        cin >> array[i];
    }
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(array[i] == array[j]){
                array[j] = INT_MIN;
            }
        }
    }for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i == 0 && array[j] != INT_MIN && i != j){
                cnt++;
            }
        }
    }cout << cnt;
    return 0;
}