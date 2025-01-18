#include <bits/stdc++.h>
using namespace std;

int main(){
    int N , scores_1 , scores_2;
    string name_student1 , name_student2;
    multimap<string , int> hackaton;
    cin >> N;
    for(int i = 0;i < N;i++){
        cin >> name_student1 >> scores_1 >> name_student2 >> scores_2;
        string result = name_student1 + " and " + name_student2;
        auto it = hackaton.find(result);
        if(it != hackaton.end() && it->second == scores_1 + scores_2){
            continue;
        }hackaton.insert(make_pair(result , scores_1 + scores_2));
    }for(multimap<string , int> :: iterator it = hackaton.begin() ; it != hackaton.end();++it){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}