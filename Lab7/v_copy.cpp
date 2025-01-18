#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k = 0;
    string a , b , c;
    cin >> n;
    map<string , string> mongo_set;
    for(int i = 0;i < n;i++){
        cin >> a >> b;
        if(a == "set"){
            cin >> c;
            mongo_set[b] = c;
        }else if(a == "get"){
            auto it = mongo_set.find(b);
            if(it != mongo_set.end()){
                cout << it -> second << endl; 
            }else{
                cout << "KE: no key " << b << " found in the document" << endl;
            }
        }
    }return 0;
}