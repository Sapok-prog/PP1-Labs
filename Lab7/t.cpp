#include <bits/stdc++.h>
using namespace std;
int main(){
    int l , r;
    cin >> l >> r;
    for(int i = l;i <= r;i++){
        set<char> result;
        string san = to_string(i);
        int length = san.length();
        for(int j = 0;j < length;j++){
            result.insert(san[j]);
        }if(result.size() == length){
            cout << san;
            return 0;
        }
    }cout << "Understandable, have a great day";
    return 0;
}