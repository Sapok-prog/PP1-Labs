#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> ok;
    int array[n];
    for(int i = 0;i < n;i++){
        cin >> array[i];
    }for(int i = 0;i < n;i++){
        if(i + 1 < n){
            int result = array[i] + array[i + 1];
            ok.insert(result);
        }
    }cout << ok.size();
    return 0;
}