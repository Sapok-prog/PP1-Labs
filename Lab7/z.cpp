#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    float grades;
    string name;
    cin >> n;
    map<string , float> gpa;
    vector<string> names;
    for(int i = 0;i < n;i++){
        cin >> name >> grades;
        gpa[name] += grades;
        names.push_back(name);
    }sort(names.begin() , names.end());
    for(auto x: gpa){
        double count = 0;
        for(int i = 0;i < names.size();i++){
            if(x.first == names[i]){
                count++;
            }
        }double res = x.second / count;
        cout << x.first << ": ";
        printf("%.3f\n", res);
    }return 0;
}