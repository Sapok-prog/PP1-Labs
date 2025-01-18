#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int str_copy[str.length()];
    for(int i = 0;i < str.length();i++){
        str_copy[str.length() - 1 - i] = int(str.at(i));
    }for(int i = 0;i < str.length();i++){
        if(str_copy[i] == int(str.at(i))){
            continue;
        }else{
            cout << "NO";
            return 0;
        }
    }cout << "YES";
    return 0;
}