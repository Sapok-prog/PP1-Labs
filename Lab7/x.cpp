#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin >> n;
    string names;
    vector<string> followers;
    for(int i = 0;i < n;i++){
        cin >> names;
        followers.push_back(names);
    }vector<string> padpiska;
    cin >> m;
    for(int i = 0;i < m;i++){
        cin >> names;
        padpiska.push_back(names);
    }set<string> result;
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            if(followers[j] == padpiska[i]){
                followers[j] = "LOL";
                padpiska[i] = "LOL";
                break;
            }
        }
    }int k = 0;
    for(int i = 0;i < n;i++){
        if(followers[i] != "LOL"){
            result.insert(followers[i]);
        }
    }for(int i = 0;i < m;i++){
        if(padpiska[i] != "LOL"){
            result.insert(padpiska[i]);
        }
    }
    for(auto x : result){
        cout << x << endl;
    }return 0;
}