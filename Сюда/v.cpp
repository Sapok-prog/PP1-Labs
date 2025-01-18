#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    for(int i = 2;i <= n;i++){
        for(int j = 1;j <= i;j++){
            if(i % j == 0){
                sum++;
            }
        }if(sum == 2){
            cout << i << " is prime" << endl;
        }sum = 0;
    }return 0;
}