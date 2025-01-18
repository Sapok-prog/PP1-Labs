#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , R;
    cin >> n >> R;
    int array[n][n];
    int x , y , result[R];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            array[i][j] = 0;
        }
    }for(int m = 0;m < R;m++){
        cin >> x >> y;
        int count = 0;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                array[j][y - 1] = 1;
                array[x - 1][j] = 1;
            }
        }for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if(array[i][j] == 0){
                    count++;
                }
            }result[m] = count;
        }
    }for(int m = 0;m < R;m++){
        cout << result[m] << " ";
    }
    return 0;
}