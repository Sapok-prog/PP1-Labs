#include <bits/stdc++.h>
using namespace std;
int global_max = INT_MIN;
int find(int n){
    if(global_max < n){
        return n;
    }return global_max;
}
int main(){
    int n , i = 0;
    while(i < 4){
        cin >> n;
        global_max = find(n);
        i++;
    }cout << global_max;
    return 0;
}