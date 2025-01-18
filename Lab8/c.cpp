#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m, count = 0;
    cin >> n;
    map<int , int> san;
    for(int i = 0;i < n;i++){
        cin >> m;
        san[m] += 1;
    }for(auto x : san){
        if(x.second > 1){
            count++;
        }
    }
    cout << count;
    return 0;
}