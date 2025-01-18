#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , a , b;
    cin >> n;
    int array_x[n];
    int array_y[n];
    multimap<int , int> ok;
    for(int i = 0;i < n;i++){
        cin >> a >> b;
        ok.insert(make_pair(a , b));
    }int k = 0;
    for(auto x : ok){
        array_x[k] = x.first;
        array_y[k] = x.second;
        k++;
    }for(int i = 0;i < n;i++){
        for(int j = 0;j != i;j++){
            int y_one = array_y[j];
            int y_two = array_y[i];
                if(array_x[i] == array_x[j]){
                    if(array_y[j] > array_y[i]){
                        array_y[j] = y_two;
                        array_y[i] = y_one;
                    }
                }
        }
    }for(int i = 0;i < n;i++){
        cout << array_x[i] << " " << array_y[i] << " " << endl;
    }
    return 0;
}