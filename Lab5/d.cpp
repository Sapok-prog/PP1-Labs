#include <bits/stdc++.h>
using namespace std;
int main(){
    string s , t;
    int sum = 0;
    cin >> s >> t;
    int length_s = s.length();
    int length_t = t.length();
    if(length_t % length_s != 0){
        cout << "NO";
        return 0;
    }for(int i = 0;i < length_t;i+=length_s){
        for(int j = 0;j < length_s;j++){
            if(s.at(j) == t.at(j + i)){
                sum++;
            }
        }
    }if(sum == length_t){
        cout << "YES";
    }else{
        cout << "NO";
    }
}