#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n][2];
    vector<int> result;
    vector<int> ok;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 2;j++){
            cin >> array[i][j];
        }
    }for(int i = 0;i < n;i++){
        ok.push_back(array[i][0] + array[i][1]);
    }
    for(int i = 0;i < ok.size();i++){
        int cnt = 0;
        for(int j = 0;j < i;j++){
            if(ok[i] == ok[j] && i != j){
                cnt++;
            }
        }result.push_back(cnt);
    }for(int i = 0;i < result.size();i++){
        cout << result[i] << endl;
    }return 0;
}