#include <bits/stdc++.h>
using namespace std;

struct lampa{
    int x;
    int y;
};

int main(){
    lampa ok;
    cin >> ok.x >> ok.y;
    
    int size , a , b;
    cin >> size;
    
    vector<pair<float ,pair<int , int>>> xyplane;

    for(int i = 0;i < size;i++){
        cin >> a >> b;
        float result = sqrt(pow(a - ok.x , 2) + pow(b - ok.y , 2));
        xyplane.push_back(make_pair(result, make_pair(a , b)));
    }

    sort(xyplane.begin() , xyplane.end());
    
    for(vector<pair<float ,pair<int , int>>> :: iterator it = xyplane.begin();it != xyplane.end(); ++it){
        cout << it->second.first << " " << it->second.second;
        cout << endl;
    }
}