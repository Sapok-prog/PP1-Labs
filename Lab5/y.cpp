#include <bits/stdc++.h>
// ’b’ and ’p’, and also between ’i’ and ’e’, 
using namespace std;
bool bonapetit(string n1 , string n2){
    transform(n1.begin(), n1.end(), n1.begin(), ::toupper);
    transform(n2.begin(), n2.end(), n2.begin(), ::toupper);
    for(long long i = 0;i < n1.length();i++){
        if(n1[i] == 'B' || n1[i] == 'P'){
            if(n2[i] != 'P' && n2[i] != 'B'){
                return false;
            }
        }else if(n1[i] == 'I' || n1[i] == 'E'){
            if(n2[i] != 'I' && n2[i] != 'E'){
                return false;
            }
        }else{
            if(n1[i] != n2[i]){
                return false;
            }
        }
    }return true;
}
int main(){
    int n , sum = 0 , i = 0;
    cin >> n;
    string bonapity[n][2];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 2;j++){
            cin >> bonapity[i][j];
        }
    }
    while(i < n){
        if(bonapity[i][0].length() != bonapity[i][1].length()){
            cout << "No" << endl;
        }
        else if(bonapetit(bonapity[i][0] , bonapity[i][1]) == true){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        i++;
    }
}