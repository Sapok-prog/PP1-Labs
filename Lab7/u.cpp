#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    string product;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> product;
    }cin >> m;
    string product_array[m][2];
    string tap;
    for(int i = 0;i < m;i++){
        for(int j = 0;j < 2;j++){
            cin >> product_array[i][j];
        }
    }cin >> tap;
    set<string> result;
    for(int i = 0;i < m;i++){
        if(product_array[i][0] == tap){
            result.insert(product_array[i][1]);
        }else if(product_array[i][1] == tap){
            result.insert(product_array[i][0]);
        }
    }cout << result.size() << endl; 
    for(auto x : result){
        cout << x << " ";
    }return 0;
}