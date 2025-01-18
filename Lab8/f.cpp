#include <bits/stdc++.h>
using namespace std;
int main(){
    string jaqsha;
    cin >> jaqsha;
    stack<char> check;
    for(char s : jaqsha){
        if(s == '('){
            check.push(s);
        }else if(s == ')'){
            if(check.empty()){
                cout << "NO";
                return 0;
            }else{
                check.pop();
            }
        }
    }if(check.empty()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}