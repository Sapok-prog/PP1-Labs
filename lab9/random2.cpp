#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , count = 0 ,multiply = 1;
    while(n != 0){
        count++;
        cin >> n;
        if(n == 0){
            break;
        }
        multiply *= n;
        if(count == 2){
            cout << multiply << " ";
            multiply = 1;
            count = 0;
        }
    }if(count == 0){
        cout << multiply;
    }
    return 0;
}