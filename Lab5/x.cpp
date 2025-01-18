#include <bits/stdc++.h>
using namespace std;
bool unUsual(int n){
    
    int a = n , sum = 1 , powka = 0;
    while(a % 5 == 0){
        a /= 5;
        sum *= 5;
    }a = n;
    while(a % 2 == 0){
        a /= 2;
        sum *= 2;
    }a = n;
    while(a % 3 == 0){
        a /= 3;
        sum *= 3;
    }
    if(sum == n){
        return true;
    }return false;

}
int main(){
   int n;
   cin >> n;
   if(unUsual(n) == false){
    cout << "No";
   }else{
    cout << "Yes";
   }return 0;
}