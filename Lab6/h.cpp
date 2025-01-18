#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int check(int k){
    if(sum == k){
        cout << "Valid";
        return 0;
    }cout << "Not valid";
    return 0;
}
int main(){
    string str;
    cin >> str;
    int a = str.length();
    for(int i = 0;i < str.length();i++){
        int k = str[i] - '0';

        if(k % 2 == 0){
        sum++;
        }
    }check(a);
}