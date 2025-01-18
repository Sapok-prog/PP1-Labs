#include <bits/stdc++.h>
using namespace std;
int main(){
    int max = 0;
    string a;
    char ok;
    cin >> a;
    for(int i = 0;i < a.length();i++){
        if(max < int(a.at(i))){
            max = int(a.at(i));
            ok = a.at(i);
        }
    }cout << ok;
    return 0;
}