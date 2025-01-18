#include <bits/stdc++.h>
using namespace std;
int main(){
    int w , h , n , x1 , y1 , x2 , y2 , sum = 0;
    cin >> w >> h >> n;
    int array[w][h];
    for(int i = 0;i < w;i++){
            for(int j = 0;j < h;j++){
                array[i][j] = 0;
        }
    }
   
    for(int f = 0;f < n;f++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = y1; i < y2 ;i++){
            for(int j = x1;j < x2;j++){
                array[i][j] = 1;
            }
        }
    }
    
    for(int i = 0;i < w;i++){
        for(int j = 0;j < h;j++){
            if(array[i][j] == 0){
                sum++;
            }
        }
    }cout << sum;
    return 0;
}