#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int sum = 0 , k = 0 , count = 0;
    cin >> str;
    char sarray[str.length()];
    for(int i = 0;i < str.length();i++){
        sarray[i] = str.at(i);
    }
    for(int i = 0;i < str.length();i++){
        for(int j = 1;j < str.length();j++){
            if(sarray[i] == sarray[j]){
                sarray[j] ='a';
            }
        }
    }for(int i = 0;i < str.length();i++){
        if(sarray[i] == 'a'){
            sum++;
        }
    }cout << sum;
    /*int array[sum];
    for(int i = 0;i < str.length();i++){
        for(int j = 1;j < str.length();j++){
            if(sarray[i] == sarray[j]){
                count++;
                array[k] = count;
                sarray[j] = ' ';
            }
        }k++;
        count = 0;
    }k = 0;
    for(int i = 0;i < sum;i++){
        if(i + 1 < sum){
            if(array[i] == array[i + 1]){
                k++;
            }
        }
    }if(k == sum){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;*/
}