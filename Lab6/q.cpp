#include <bits/stdc++.h>
using namespace std;
float girls(float ppl , float grlzzz){
    float girlsss = (grlzzz / ppl) * 100;
    return girlsss;
}int main(){
    int a , b;
    cin >> a >> b;
    cout << girls(a , b);
    return 0;
}