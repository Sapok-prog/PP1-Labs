#include <bits/stdc++.h>
using namespace std;
int output(int a){
    cout << a << " ";
    return 0;
}
int main(){
    int n , i = 0;
    cin >> n;
    int array[n];
    for(int i = 0;i < n;i++){
        cin >> array[i];
    }for(int i = n - 1;i >= 0;i--){
        output(array[i]);
    }return 0;
}