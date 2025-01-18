#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , a , max = INT_MIN;
    cin >> n;

    map<int , int> countik;

    for(int i = 0;i < n;i++){
        cin >> a;
        countik[a]++;
        if(countik[a] > max){
            max = countik[a];
        }
    }
    for(map<int , int> :: iterator it = countik.begin();it != countik.end();++it){
        if(it->second == max){
            cout << it->first;
            break;
        }
    }return 0;
}