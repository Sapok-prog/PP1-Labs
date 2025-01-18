#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    stack<char> chariki;
    for(int i = 0;i < str.length();i++){
        if(!chariki.empty()){
            string result = ""; 
            result += chariki.top();
            result += str[i];  
            int num = stoi(result);
            if(sqrt(num) == int(sqrt(num))){
                chariki.pop();
                continue;
            }
        }chariki.push(str[i]);
    }if(chariki.empty()){
        cout << "Stack is empty";
        return 0;
    }while(!chariki.empty()){
        cout << chariki.top();
        chariki.pop();
    }return 0;
}
