#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m , k , sum = 0;
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        cin >> k;
        sum += k;
    }sum /= n;
    if(sum - m < 0){
        cout << (sum - m) * (-1);
    }else{
        cout << sum - m;
    }
}