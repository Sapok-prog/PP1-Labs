#include <bits/stdc++.h>
using namespace std;
int n , m , k = 0;
int trans(int a){
    cout << a << " ";
    return 0;
}
int main(){
    cin >> n >> m;
    int array[n][m] , array_giant[n * m];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> array[i][j];
            array_giant[k] = array[i][j];
            k++;
        }
    }for(int i = 0;i < m;i++){
        for(int j = 0;j < k;j+=m){
            trans(array_giant[i + j]);
        }cout << endl;
    }return 0;

}