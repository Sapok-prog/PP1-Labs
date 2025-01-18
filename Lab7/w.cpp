#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m , hp;
    cin >> n;
    string demon , power , slayers;

    map<string , int> map_demon;
    for(int i = 0;i < n;i++){
        cin >> demon >> power;
        map_demon[power] += 1;
    }
    cin >> m;
    for(int i = 0; i < m;i++){
        cin >> slayers >> power >> hp;
        int kills = 0;
        if(map_demon[power] > 0){
            kills = min(hp , map_demon[power]);
            map_demon[power] -= kills;
        }
    }
    int ostatok = 0;
    for(auto i : map_demon){
        ostatok += i.second;
    }
    cout << "Bugs left: " << ostatok;
}