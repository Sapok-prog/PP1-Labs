#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m , babe;
    string assis , stud;
    cin >> n;
    map<string , string> assiski;
    for(int i = 0;i < n;i++){
        cin >> assis >> babe;
        for(int i = 0;i < babe;i++){\
        cin >> stud;
            assiski[stud] = assis;
        }
    }cin >> m;
    for(int i = 0;i < m;i++){
        cin >> stud;
        if(assiski.find(stud) != assiski.end()){
            cout << assiski[stud] << endl;
        }else{
            cout << "F" << endl;
        }
    }return 0;
}