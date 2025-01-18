#include <bits/stdc++.h>
using namespace std;
double triangular(int a , int b){
    int ultraplus = a * a + b * b;
    float c = sqrt(ultraplus);
    return c;
}
int main(){
    int a , b;
    cin >> a >> b;
    float c = triangular(a , b);
    cout << setprecision(4) << c;
    return 0;
}