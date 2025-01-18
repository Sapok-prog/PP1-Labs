#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m , k, x , y;
    cin >> n >> m >> k;
    string array[n][m];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            array[i][j] = ".";
        }
    }
    int x1 = 0;
    int y1 = 0;


    for(int l = 0;l < k;l++){
        cin >> y >> x;
        array[y][x] = "*";
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                
            }
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout << array[i][j];
        }cout << endl;
    }
}

