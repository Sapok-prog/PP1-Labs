#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m , k;
    cin >> n >> m;

    vector<int> mini_bro1;
    vector<int> mini_bro2;

    for(int i = 0;i < n;i++){
        cin >> k;
        mini_bro1.push_back(k);
    }
    
    unique(mini_bro1.begin() , mini_bro1.begin() + n);
    
    for(int i = 0;i < m;i++){
        mini_bro1.push_back(k);
    }

    unique(mini_bro1.begin() , mini_bro1.begin() + n);

    vector<int> boss_bro(mini_bro1.size() + mini_bro2.size());

    int count = 0;
    for(int i = 0;i < mini_bro1.size();i++){
        if(mini_bro1[i] != 0){
        boss_bro[count] = mini_bro1[i];
        count += 2;
        }
    }

    count = 1;
    for(int i = 0;i < mini_bro2.size();i++){
        if(mini_bro2[i] != 0){
        boss_bro[count] = mini_bro2[i];
        count += 2;
        }
    }

    unique(boss_bro.begin() , boss_bro.begin() + boss_bro.size());
 

    for(int i = 0;i < boss_bro.size();i++){
        if(boss_bro[i] != 0){
        cout << boss_bro[i] << " ";
        }
    }
}