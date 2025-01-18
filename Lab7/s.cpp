#include <bits/stdc++.h>
using namespace std;
int main(){
    set<pair<string , int>> attandance;
    set<string> names;
    string k;
    int n , m;
    cin >> n;
    for(int i = 0;i< n;i++){
        cin >> k >> m;
        names.insert(k);
        attandance.insert({k , m});
    }for(auto x : names){
        int count = 0;
        for(auto y : attandance){
            if(x == y.first){
                count++;
            }
        }if(count >= 3){
            cout << x << " +1" << endl;
        }else{
            cout << x << " NO BONUS" << endl;
        }
    }return 0;
}