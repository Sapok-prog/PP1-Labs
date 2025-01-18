#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , san , multiply;
    cin >> n >> san >> multiply;

    cout << san << " ";
    for(int i = 0;i < n - 1;i++){
        san *= multiply;
        cout << san  << " ";
    }return 0;
}