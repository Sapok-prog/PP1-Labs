#include <bits/stdc++.h>
using namespace std;
bool check(string s , int n){
    string baza = "0123456789";
    int count = 0, pomosh = 1;
    for(int i = 0;i < s.length();i++){
        if(baza.find(s.at(i)) != string::npos){
            count++;
            while(i + pomosh < n){
                if(baza.find(s.at(i + pomosh)) != string::npos){
                    count++;
                    pomosh++;
                }else{
                    break;
                }
            }
        }
    }if(count == n){
        return true;
    }return false;
}
int main(){
    int n;
    string s;
    cin >> s >> n;
    if(!check(s , n)){
        cout << "No";
    }else{
        cout << "No";
    }
}