#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    vector<int> ok;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> m;
        ok.push_back(m);
    }for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(ok[i] == ok[j]){
                ok[j] = INT_MIN;
            }
        }
    }for(int i = 0;i < n;i++){
        if(ok[i] == INT_MIN){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }return 0;
}