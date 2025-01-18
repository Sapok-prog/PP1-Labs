#include <bits/stdc++.h>
using namespace std;
int main(){
    int N , M;
    double count , sum = 0;
    string name_city_pity;
    map<string , double> city_pity;

    cin >> N;

    for(int i = 0;i < N;i++){
        cin >> M;
        for(int j = 0;j < M;j++){
            cin >> name_city_pity >> count;
            city_pity[name_city_pity] += count;
            sum += count;
        }
    }

    for(map<string , double> :: iterator it = city_pity.begin();it != city_pity.end();++it){
        cout << it->first << " " << (it->second/sum) * 100 << endl;
    }
}