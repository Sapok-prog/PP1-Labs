#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int l , r;
    cin >> str >> l >> r;
    char str_copy[r - l + 1];
    for(int i = l;i <= r;i++){
        str_copy[i] = str.at(i);
        cout << str_copy[i];
    }return 0;
}