#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m, count = 0;
    cin >> n >> m;
    int array[n][m];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> array[i][j];
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(i + 1 < n && j + 1 < m){
                if(array[i][j] == array[i + 1][j] && array[i][j] == array[i][j + 1] && array[i][j] == array[i + 1][j + 1]){
                    cout << "NO";
                    return 0;
                }
            }
        }   
    }cout << "YES";
    return 0;
}