#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    for(int i = 0;i < a.length();i++){
        if(a.at(i) >= 65 && a.at(i) <= 90){
            cout << a[i];
        }else{
            continue;
        }
    }return 0;
}
