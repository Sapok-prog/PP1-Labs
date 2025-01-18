#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , size = 0;
    cin >> n;
    for(int i = 1;i <= n;i++){
        size+=i;
    }
    vector<int> fill_task(size);
    int start = 0;
    for(int i = 1;i <= n;i++){
        fill(fill_task.begin() + start, fill_task.begin() + start + i, i);
        start += i;
    }
    for(int i = 0;i < size;i++){
        cout << fill_task[i] << " ";
    }
}