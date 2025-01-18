#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  int b[n][m];
  for (int i = 0 ; i < n ; i++){
    for (int j = 0; j < m; j++){
      cin >> b[i][j];
    }
  }
  for (int i = 0 ; i < n ; i++){
    for (int j = 0; j < m; j++){
      if(b[n-1-i][m-1-j] < b[i][j]){
        break;
      }
      else{
        cout << b[n-1-i][m-1-j] << " " ;
      }
    }
    cout << endl;
  }
return 0;
}
