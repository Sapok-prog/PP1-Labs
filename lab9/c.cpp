#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> powerki;
    for(int i = 0;i <= n;i++){
        powerki.push_back(powl(i , i));
    }
    for(int i = 0;i <= n;i++){
        cout << powerki[i] << " ";
    }
    return 0;
}