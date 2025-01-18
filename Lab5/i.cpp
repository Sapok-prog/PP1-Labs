#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    string str;
    cin >> str;
    for(int i = 0;i < str.length();i++){
        sum += int(str.at(i));
    }if(sum > 300){
        cout << "It is tasty!";
    }else{
        cout << "Oh, no!";
    }return 0;
}