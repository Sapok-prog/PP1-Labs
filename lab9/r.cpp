#include <bits/stdc++.h>
using namespace std;

int main(){
    int N , K;
    cin >> N >> K;
    vector<int> permik;
    for(int i = 1;i <= N;i++){
        permik.push_back(i);
    }

    int sum_fixed = 0;
    do{
        int fixed_points = 0;
        for(int i = 0;i < N;i++){
            if(permik[i] == i + 1){
                fixed_points++;
            }
        }if(fixed_points == K){
            sum_fixed++;
        }
    }while(next_permutation(permik.begin() , permik.end()));
    cout << sum_fixed;
}