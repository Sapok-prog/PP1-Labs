#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<string> ok;
    string ska;
    for(int i = 0;i < n;i++){
        cin >> ska;
        ok.insert(ska);
    }if(n == ok.size()){
        cout << "YES";
    }else{
        cout << "NO";
    }return 0;
}