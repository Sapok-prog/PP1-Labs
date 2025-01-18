#include <bits/stdc++.h>
using namespace std;
string devide(int sum , int a){
    if(sum % a == 0){
        return "YES";
    }return "NO";
}
int main(){
    int num , sum = 0;
    string str;

    cin >> str;
    int the_last = str.at(str.length() - 1) - '0';

    for(int i = 0;i < str.length();i++){
        num = str.at(i) - '0';
        sum += num;
    }cout << devide(sum , the_last);
    return 0;
}