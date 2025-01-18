#include <bits/stdc++.h>
using namespace std;
int main(){;
    string linie , note = "";
    getline(cin , linie);
    map<string , int> notes;
    for(int i = 0;i < linie.length();i++){
        if(linie[i] != ' '){
            note += linie[i];
        }else{
            notes[note] += 1;
            note = "";
        }
    }if(!note.empty()){
        notes[note] += 1;
    }
    vector<pair<string , int>> sortik;
    for(map<string , int> :: iterator it = notes.begin();it != notes.end();++it){
        sortik.push_back(make_pair(it -> first , it -> second));
    }
    sort(sortik.begin(), sortik.end(), [](pair<string, int> a, pair<string, int> b) {
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first < b.first;
    });

    for (int i = 0; i < sortik.size(); i++) {
        cout << sortik[i].first << " : " << sortik[i].second << endl;
    }

    return 0;
}