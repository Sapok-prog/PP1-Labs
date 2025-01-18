#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    int array[n][n];
    int t=0;
    int b=n-1;
    int l=0;
    int r=n-1;
    int number = 1;

    while(t<=b && l<=r){
        for (int i=l; i<=r; i++){
            array[t][i] = number++;
        }
        t++;
        for (int i=t; i<=b; i++){
            array[i][r] = number++;
        }
        r--;
        if (t<=b){
            for (int i=r; i>=l; i--){
                array[b][i] = number++;
            }
            b--;
        }
        if (l<=r){
            for (int i=b; i>=t; i--){
                array[i][l] = number++;
            }
            l++;
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}