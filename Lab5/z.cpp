#include <bits/stdc++.h>
using namespace std;
string strToBool(string str){
    if(str == "1"){
        return "true";
    }else if(str == "0"){
        return "false";
    }return str;
}
int main(){
    string n;
    cin >> n;
    cout << strToBool(n);
    return 0;
}
