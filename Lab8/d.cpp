#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int , int> array;
    int n , m , k;
    cin >> n >> k;
    for(int i = 0;i < n;i++){
        cin >> m;
        array[m] += 1;
    }cout << array[k];
    return 0;
}