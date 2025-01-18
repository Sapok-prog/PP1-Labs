#include <bits/stdc++.h>
using namespace std;
string HEX = "ABCDEF";
string decToHex(int dec){
    string hex;
    while(dec > 0){
        int reminder = dec % 16;
        if(reminder < 10){
            hex = to_string(reminder) + hex;
        }else{
            hex = HEX.at(reminder - 10) + hex;
        }dec /= 16;
    }return hex;
}
int main(){
    int dec;
    cin >> dec;
    cout << decToHex(dec);
    return 0;
}