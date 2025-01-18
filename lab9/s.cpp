#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n;
    set<int> boss_kfc;
    for(int i = 0;i < n;i++){
        cin >> m;
        boss_kfc.insert(m);
    }vector<int> boss_bossovich_kfc(boss_kfc.begin() , boss_kfc.end());
    do{
       for(int i = 0;i < boss_bossovich_kfc.size();i++){
            cout << boss_bossovich_kfc[i] << " ";
       }cout << endl;
    }while(next_permutation(boss_bossovich_kfc.begin() , boss_bossovich_kfc.end()));
    return 0;
}