#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    string str_copy[str.length()];
    for(int i = 0;i < str.length();i++){
        if(str.at(i) == 'z'){
            str_copy[i] = 'a';
        }else{
            str_copy[i] = str.at(i) + 1;
        }cout << str_copy[i];
    }return 0;
}