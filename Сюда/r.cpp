#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin >> n >> m;
    int array[n][m];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> array[i][j];
            if(int(sqrt(array[i][j])) == sqrt(array[i][j])){
                array[i][j] = sqrt(array[i][j]);
            }cout << array[i][j] << " ";
        }cout << endl;
    }return 0;
}