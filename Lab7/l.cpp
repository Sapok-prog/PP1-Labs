#include <bits/stdc++.h>
using namespace std;
bool alph_mini(string s){
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0;i < s.length();i++){
        if(alpha.find(s[i]) != string::npos){
            return true;
        }
    }return false;
}
bool san(string s){
    string num = "0123456789";
    for(int i = 0;i < s.length();i++){
        if(num.find(s[i]) != string::npos){
            return true;
        }
    }return false;
}bool alph(string s){
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 0;i < s.length();i++){
        if(alpha.find(s[i]) != string::npos){
            return true;
        }
    }return false;
}
int main(){
    int n , cnt = 0;
    cin >> n;
    string m;
    vector<string> ok;
    set<string> result;
    for(int i = 0;i < n;i++){
        cin >> m;
        ok.push_back(m);
        if(alph(ok[i]) && san(ok[i]) && alph_mini(ok[i])){
            result.insert(ok[i]);
            cnt++;
        }
    }cout << result.size() << endl;
    for(string num : result){
        cout << num << endl;
    }return 0;
}