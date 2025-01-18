#include <bits/stdc++.h>
using namespace std;
int main(){
    int count_mini = 0;
    int count_giant = 0;
    string s;
    cin >> s;
    for(int i = 0;i < s.length();i++){
        if(s.at(i) >= 65 && s.at(i) <= 90){
            count_giant++;
        }else if(s.at(i) >= 97 && s.at(i) <= 122){
            count_mini++;
        }
    }cout << count_mini << " " << count_giant;
    return 0;
}