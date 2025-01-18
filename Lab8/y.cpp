#include <bits/stdc++.h>
using namespace std;
int main(){
    string slovo;
    cin >> slovo;
    stack<char> charik;
    for(int i = 0;i < slovo.length();i++){
        if(!charik.empty()){
            if(slovo.at(i) == charik.top()){
                charik.pop();
                continue;
            }
        }charik.push(slovo.at(i));
    }if(charik.empty()){
        cout << "YES";
    }else{
        cout << "NO";
    }
}