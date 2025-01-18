#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n;
    vector<int> glav_boss;
    for(int i = 0;i < n;i++){
        cin >> m;
        glav_boss.push_back(m);
    }auto it = unique(glav_boss.begin() , glav_boss.end());
    glav_boss.erase(it , glav_boss.end());

    for(int i = 0;i < glav_boss.size();i++){
        cout << glav_boss[i] << " ";
    }return 0;
}