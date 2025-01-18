#include <bits/stdc++.h>
using namespace std;
int main(){
    string HEXI = "ABCDEF";
    int decimal;
    string hex = "";
    cin >> decimal;
    while(decimal > 0){
        int reminder = decimal % 16;
        if(reminder < 10){
            hex = to_string(reminder) + hex;
        }else{
            hex = HEXI.at(reminder - 10) + hex;
        }decimal /= 16;
    }cout << hex;
    return 0;
}