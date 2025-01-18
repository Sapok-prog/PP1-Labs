#include <bits/stdc++.h>
using namespace std;
char fix(int a , char b){
    if(a % 2 == 0){
        return toupper(b);
    }return b;
}
int main(){
    string str;
    cin >> str;
    for(int i = 0;i < str.length();i++){
        cout << fix(i , str.at(i));
    }
}