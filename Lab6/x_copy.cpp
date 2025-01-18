#include <bits/stdc++.h>
using namespace std;
bool isUsual(int num , int sum){
    if((num % 2 == 0 || num % 3 == 0 || num % 5 == 0) && sum == 0){
        return true;
    }return false;
}
int main(){
    int n, sum = 0 , sum2 = 0;;
    cin >> n;
    int k = 0;
    for(int i = 1;i <= n;i++){
        if(i == 2 || i == 3 || i == 5){
            continue;
        }
        for(int j = 1;j <= i;j++){
            if(i % j == 0){
                sum2++;
            }
        }if(sum2 == 2 && n % i == 0){
            sum++;
        }sum2 = 0;
    }
    if(!isUsual(n , sum)){
        cout << "No";
    }else{
        cout << "Yes";
    }return 0;
}


/*int array[size];
    for(int i = 1;i <= num;i++){
        if(i == 2 || i == 3 || i == 5){
            continue;
        }
        
        for(int j = 1;j <= i;j++){
            if(i % j == 0){
                sum2++;
            }
        }
        if(sum2 == 2){
            array[k] = i;
            k++;
        }sum2 = 0;
    }*/