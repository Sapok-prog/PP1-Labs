#include <bits/stdc++.h>
using namespace std;
int love(int a[] , int b[] , int n){
    sort(a, a+n);
    sort(b, b+n);
    int counter = 0, i = 0, j = 0;
    while (i < n && j < n) {
        if (a[i] == b[j]) {
            counter++;
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }return counter;
}
int main(){
    int n; 
    ios_base::sync_with_stdio(false);
    cin >> n;
    int array_1[n] , array_2[n];
    for(int i = 0;i < n;i++){
        ios_base::sync_with_stdio(false);
        cin >> array_1[i];
    }for(int i = 0;i < n;i++){
        ios_base::sync_with_stdio(false);
        cin >> array_2[i];
    }cout << love(array_1 , array_2 ,n);
} 