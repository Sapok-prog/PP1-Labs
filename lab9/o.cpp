#include <bits/stdc++.h>
using namespace std;
bool check_polindrom(vector<int> a){
    vector<int> b(a.begin() , a.end());
    reverse(a.begin() , a.end());
    if(a == b){
        return true;
    }return false;
}
int main(){
    int n , m;
    cin >> n;
    vector<int> glav_boss;
    for(int i = 0;i< n;i++){
        cin >> m;
        glav_boss.push_back(m);
    }
    sort(glav_boss.begin() , glav_boss.end());
    do{
        vector<int> new_boss;
        for(int i = 0;i< glav_boss.size();i++){
            new_boss.push_back(glav_boss[i]);
        }if(check_polindrom(new_boss)){
            for(int i = 0;i < new_boss.size();i++){
                cout << new_boss[i] << " ";
            }return 0;
        }
    }while(next_permutation(glav_boss.begin(), glav_boss.end()));
    cout << "Impossible";
    return 0;
}