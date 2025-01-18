#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , l ,m;
    cin >> n >> l;
    vector<int> OK;
    for(int i = 0;i < n;i++){
        cin >> m;
        OK.push_back(m);
    }rotate(OK.begin() , OK.begin() + l, OK.end());
    reverse(OK.begin(), OK.end());
    for(int i = 0;i < n;i++){
        cout << OK[i] << " ";
    }
}