#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ok;
    int n , m , k = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> m;
        ok.push_back(m);
    }sort(ok.begin() , ok.end());
    for(int i = 0;i < n + 1;i++){
        if(ok[i] != i){
            cout << i;
            k++;
            break;
        }
    }if(k == 0){
        cout << n;
    }
    return 0;
}