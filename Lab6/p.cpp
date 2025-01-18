#include <bits/stdc++.h>
using namespace std;
int znak(int a){
    cout << (a * (-1));
    return 0;
}
int main(){
    int n;
    cin >> n;
    if(n > 0){
        cout << n;
    }else znak(n);
    return 0;
}