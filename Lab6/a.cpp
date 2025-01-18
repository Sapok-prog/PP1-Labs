#include <bits/stdc++.h>
using namespace std;
int sum(int a , int b){
    int sum;
    sum = a + b;
    return sum;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    cout << sum(num1 , num2);
    return 0;
}