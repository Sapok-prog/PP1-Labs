#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    set<int> ok;
    while(cin >> n){
        ok.insert(n);
    }cout << ok.size();
    return 0;
}