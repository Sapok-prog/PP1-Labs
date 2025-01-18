#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string wrt;
    cin >> n;
    map<string , int> index;
    for(int i = 0;i < n;i++){
        cin >> wrt;
        if(index[wrt].empty()){
            index[wrt] = i;
        }
    }for(auto x : index){
        cout << x.first << " " << x.second;
    }return 0;
}