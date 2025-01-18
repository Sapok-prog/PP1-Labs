#include <bits/stdc++.h>
using namespace std;
char toUp(char a){
    return toupper(a);
}
int main(){
    char a;
    cin >> a;
    if(isupper(a)){
        cout << a;
    }else{
        cout << toUp(a);
    }return 0;
}