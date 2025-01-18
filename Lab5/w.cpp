#include <bits/stdc++.h>
using namespace std;
int miss(string str , int n){
    int start = 1;
    for(int i = 0;i < n;i++){
        if(str.find(to_string(start)) != string::npos){
            start++;
        }
    }return start;
}

int main(){
    string str , draft = "";
    getline(cin , str);
    int n;
    cin >> n;
    cout << miss(str, n);
}