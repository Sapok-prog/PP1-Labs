#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int NOC(int avg , int togzhan){
    int result = togzhan - avg;
    if(result < 0){
        return (result * (-1));
    }return result;
}
int main(){
    int n , m , avg;
    cin >> n >> m;
    int array[n];
    for(int i = 0;i < n;i++){
        cin >> array[i];
        sum += array[i];
    }avg = sum / n;
    cout << NOC(avg , m);
}