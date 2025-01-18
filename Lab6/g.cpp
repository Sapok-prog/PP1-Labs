#include <bits/stdc++.h>
using namespace std;
string vowels = "aeiouAEIOU";
    char clear(char a){
        if(vowels.find(a) == string::npos){
            return a;
        }
    }int main(){
        string str;
        getline(cin , str);
        for(int i = 0;i < str.length();i++){
            cout << clear(str.at(i));
        }return 0;
    }
    
    