#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m , sum = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> m;
        int sum_for_prime = 0;
        if(m < 0){
            m *= (-1);
        }for(int j = 1;j <= m;j++){
            if(m % j == 0){
                sum_for_prime++;
            }
        }if(sum_for_prime == 2){
            sum++;
        }
    }cout << sum;
    return 0;
}