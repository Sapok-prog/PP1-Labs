#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , count = 0;;
    string number;
    cin >> n;
    map<string , int> alo;
    for(int i = 0;i < n;i++){
        cin >> number;
        alo[number] += 1;
    }for(auto x : alo){
        if(x.second == 3){
            count++;
        }
    }cout << count;
    return 0;
}