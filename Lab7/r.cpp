#include <bits/stdc++.h>
using namespace std;
int main(){
   string m;
   set<char> common;
   vector<string> slova;
   int n, sum = 0;
   cin >> n;
   for(int i = 0;i < n;i++){
    cin >> m;
    sum += m.length();
    slova.push_back(m);
   }for(int i = 0;i< n;i++){
    string proverka = slova[i];
    for(int j = 0;j < proverka.length();j++){
        common.insert(proverka[j]);
    }
  }string delai = "";
  for(auto x : common){
    delai += x;
  }for(int i = 0;i< n;i++){
    string proverka = slova[i];
    for(int j = 0;j < proverka.length();j++){
        if(delai.find()){
    }
  }
}