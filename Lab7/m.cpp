#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string ska;
    set<string> ok;
    for(int i = 0;i < n;i++){
        cin >> ska;
        ok.insert(ska);
    }cout << ok.size();
    return 0;
}