#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin >> n;
    vector<int> ok;
    for(int i = 0;i < n;i++){
        cin >> m;
        ok.push_back(m);
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){ 
            if(ok[i] == ok[j] && j != i){
                ok[i] = INT_MIN;
                ok[j] = INT_MIN;
            }
        }
    }for(int i = 0;i < n;i++){
        cout << ok[i] << " ";
    }
    return 0;
}