#include <iostream>
using namespace std;
int main(){
    int n, k = 0;
    cin >> n;
    string christmas[n][(n * 2) - 1];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < ((n * 2) - 1); j++){
        christmas[i][j] = ".";
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < ((n * 2) - 1); j++){
            if(n - 1 == j){
                christmas[i][j] = "*";
                while(i >= k){
                    christmas[i][j - k] = "*";
                    christmas[i][j + k] = "*";
                    k++;
                }
            }
        }k = 0;
    }for(int i = 0;i < n;i++){
        for(int j = 0;j < ((n * 2) - 1); j++){
            cout << christmas[i][j];
        }cout << '\n';
    }
    return 0;
}