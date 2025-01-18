#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , q , l , r , okr;
    int count = 1;
    cin >> n;
    vector<int> ok;
    for(int i = 0;i < n;i++){
        cin >> okr;
        ok.push_back(okr);
    }cin >> q;
    int array[q];
    for(int i = 0;i < q;i++){
        int max = INT_MIN;
        int count = 0;
        cin >> l >> r;
        for(int j = l;j < r + 1;j++){
            if(max < ok[j]){1
                max = ok[j];
                count++;
            }
        }array[i] = count;
    }for(int i = 0;i < q;i++){
        cout << array[i] << endl;
    }
    return 0;
}