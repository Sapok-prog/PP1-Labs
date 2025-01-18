#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int result(int a , int b){
    if(a == b){
        sum++;
    }return sum;
}int main(){
    int n , m , suml = 0;
    cin >> n;
    int array[n];
    for(int i = 0;i < n;i++){
        cin >> array[i];
    }cin >> m;
    for(int i = 0;i < n;i++){
        suml = result(m , array[i]);
    }
    
    if(suml > 0){
        cout << "Yes";
    }else{
        cout << "No";
    }
}
    
