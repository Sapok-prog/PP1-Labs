#include <bits/stdc++.h>
using namespace std;

bool check_TWO_D(vector<int> a , vector<int> b){
    int sum_1 = accumulate(a.begin(), a.end() , 0);
    int sum_2 = accumulate(b.begin(), b.end() , 0);

    if(sum_1 != sum_2){
        return sum_1 < sum_2;
    }else if(a.size() != b.size()){
        return a.size() < b.size();
    }
    return a < b;
}

int main(){
    int n , m , rows;
    cin >> n;
    vector<vector<int>> TWO_D;
    for(int i = 0;i < n;i++){
        cin >> m;
        vector<int> micro_TWO_D;
        for(int j = 0;j < m;j++){
            cin >> rows;
            micro_TWO_D.push_back(rows);
        }TWO_D.push_back(micro_TWO_D);
    }
    sort(TWO_D.begin() , TWO_D.end() , check_TWO_D);

    for(int i = 0;i < n;i++){
        for(int j = 0;j < TWO_D[i].size();j++){
            cout << TWO_D[i][j] << " "s;
        }cout << endl;
    }
}