#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k = 0;
    string a , b , c;
    cin >> n;
    vector<pair<int , pair<string , string>>> mongo_set;
    vector<pair<int , string>> mongo_get;
    for(int i = 0;i < n;i++){
        cin >> a >> b;
        if(a == "set"){
            cin >> c;
            mongo_set.push_back(make_pair(k , make_pair(b , c)));
        }else{
            mongo_get.push_back(make_pair(k , b));
        }k++;
    }
    for(auto x : mongo_get){
        bool pravda = false;
        k = 0;
        for(auto y : mongo_set){
            if(x.second == y.second.first && x.first > y.first){
                pravda = true;
                cout << y.second.second << endl;
                mongo_set.erase(mongo_set.begin() + k);
                break;
            }k++;
        }if(pravda == false){
            cout << "KE: no key " << x.second << " found in the document" << endl;
        }
    }return 0;
}