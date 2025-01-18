#include <bits/stdc++.h>
using namespace std;
bool kampyt_bel(int sum , int candy){
    if(sum - candy < 0){
        cout << (sum - candy) * (-1);
    }else{
        cout << sum - candy;
    }return true;
}
int main(){
    int n , m , k , sum = 0;
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        cin >> k;
        sum += k;
    }sum /= n;
    kampyt_bel(sum , m);
    return 0;

}