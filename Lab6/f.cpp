#include <bits/stdc++.h>
using namespace std;
int sum = 0;
string result(string a , int num){
    for(int i = 0;i< a.length();i++){
        if(a.at(i) >= 48 && a.at(i) <= 57){
            sum++;
        }
    }if(num <= sum)
        return "YES";
    else
        return "NO";
}
int main(){
    int num;
    string a;
    cin >> a >> num;
    cout << result(a , num);
}