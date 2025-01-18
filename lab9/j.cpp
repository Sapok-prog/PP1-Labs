#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n;
    vector<int> array;
    vector<int> reverse_array;
    for(int i = 0;i < n;i++){
        cin >> m;
        reverse_array.push_back(m);
        array.push_back(m);
    }reverse(reverse_array.begin() ,reverse_array.end());
    for(int i = 0;i < n;i++){
        if(reverse_array[i] != array[i]){
            cout <<"Instead of "<< array[i] << " here was " << reverse_array[i] << endl; 
        }else{
            cout << "OK" << endl;
        }
    }return 0;
}