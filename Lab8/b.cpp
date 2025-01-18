#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> odd;
    vector<int> even;
    int n , m;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> m;
        if(m % 2 == 0){
            even.push_back(m);
        }else{
            odd.push_back(m);
        }
    }sort(even.begin() , even.end());
    sort(odd.begin() , odd.end());
    for(int i = 0;i < even.size();i++){
       cout << even[even.size() - 1 - i] << " ";
    }for(auto x: odd){
        cout << x << " ";
    }
    return 0;
}