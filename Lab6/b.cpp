#include <bits/stdc++.h>
using namespace std;
int delai(int a , int b){
    int elm;
    elm = a - b;
    if(elm >= 0){
        return elm;
    }else{
        return (-1 * elm);
    }
}int main(){
    int n;
    cin >> n;
    int array_a[n] , array_b[n] , array_d[n];
    for(int i = 0;i < n;i++){
        cin >> array_a[i];
    }for(int i = 0;i < n;i++){
        cin >> array_b[i];
    }
    for(int i = 0;i < n;i++){
        array_d[i] = delai(array_a[i] , array_b[i]);
        cout << array_d[i] << " ";
    }
    return 0;
}