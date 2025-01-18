#include <bits/stdc++.h>
using namespace std;
int main(){
    string s , t;
    cin >> s >> t;
    if(s.length() != t.length()){
        cout << "NO";
        return 0;
    }
    int array_s[s.length()], array_t[t.length()];
    for(int i = 0;i < s.length();i++){
        array_s[i] = int(s.at(i));
        array_t[i] = int(t.at(i));
    }sort(array_s,array_s + s.length());
    sort(array_t,array_t + t.length());
    for(int i = 0;i < s.length();i++){
        if(array_s[i] != array_t[i]){
            cout << "NO";
            return 0;
        }
    }cout << "YES";
    return 0;
}