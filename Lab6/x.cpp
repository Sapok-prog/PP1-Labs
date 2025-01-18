#include <bits/stdc++.h>
using namespace std;
int sum = 0 , sum2 = 0;
bool isUsual(int num){
    for(int i = 2;i < num;i++){
        
    }
}
int main(){
    int n;
    cin >> n;
    if(!isUsual(n)){
        cout << "No";
    }else{
        cout << "Yes";
    }return 0;
}



/*for(int i = 4;i <= num;i++){
        for(int j = 1;j <= i;j++){
                if(i % j == 0){
                    sum2++;
                }
        }if(num % i == 0 && sum2 == 2){
            sum++;
        }sum2 == 0;
    }if((num % 2 == 0 || num % 3 == 0 || num % 5 == 0) && sum == 0){
        return true;
    }return false;*/