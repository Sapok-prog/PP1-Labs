#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    int score , n;
    vector<string> names;
    vector<int> scores;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> name >> score;
        names.push_back(name);
        scores.push_back(score);
    }sort(names.begin() , names.end());
    sort(scores.begin(), scores.end());
    for(int i = 0;i < n;i++){
        cout << names[i] << " " << scores[i] << endl;
    }return 0;
}