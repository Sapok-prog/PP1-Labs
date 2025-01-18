#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , size = 0 , k;
    vector<int> ok;
    while((cin >> n) && n != 0){
        size++;
        ok.push_back(n);
    }if(size % 2 != 0){
        k = (size / 2) + 1;
    }else{
        k = size / 2;
    }
    for(int i = 0;i < k;i++){
        if(i == ((size / 2) + 1) - 1){
            cout << ok[i];
        }else{
            cout << ok[i] + ok[size - 1 - i] << " ";
        }
    }return 0;
}