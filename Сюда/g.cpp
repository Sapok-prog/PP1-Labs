#include <bits/stdc++.h>
using namespace std;
int main(){
    int x , y;
    cin >> y >> x;
    string array[8][8];
    if(x > 7 || y > 7){
        cout << "Impossible";
        return 0;
    }
    for(int i = 0;i < 8;i++){
        for(int j = 0;j < 8;j++){
            array[i][j] = "*";
        }
    }
    int x1 = x + 1;
    int y1 = y - 1;


    for(int i = 0;i < 8;i++){
        for(int j = 0;j < 8;j++){
            array[y][j] = "2";
            array[j][x] = "2";


            if(i == y && j == x){
                while(y1 >= 0 && x1 <= 7){
                     array[y1][x1] = "2";
                     x1++;
                     y1--;
                }x1 = x - 1;
                 y1 = y - 1;
                while(y1 >= 0 && x1 >= 0){
                    array[y1][x1] = "2";                    
                    x1--;
                    y1--;
                }x1 = x + 1;
                 y1 = y + 1;
                while(y1 <= 7 && x1 <= 7){
                    array[y1][x1] = "2";
                    x1++;
                    y1++;
                }x1 = x - 1;
                 y1 = y + 1;
                while(y1 <= 7 && x1 >= 0){
                    array[y1][x1] = "2";
                    x1--;
                    y1++;
                }
            }
        
        } 
    }

    for(int i = 0;i < 8;i++){
        for(int j = 0;j < 8;j++){
            array[y][x] = "1";
            cout << array[i][j] << " ";
        }cout << endl;
    }return 0;
}