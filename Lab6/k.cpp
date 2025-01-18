#include <bits/stdc++.h>
using namespace std;
int summa = 0;
int sum(int a){
    summa += a;
    return summa;
}
int main(){
    int result;
    string str;
    cin >> str;
    for(int i = 0;i < str.length();i++){
        int a = str.at(i) - '0';
        result = sum(a);
    }cout << result;
    return 0;
}