#include <bits/stdc++.h>
using namespace std;
int main(){
    string first , second;
    cin >> first >> second;
    stack<char> stack_first;
    stack<char> stack_second;
    string result_1 = "";
    string result_2 = "";
    for(int i = 0;i < first.length();i++){
        if(first.at(i) == '#'){
            if(!stack_first.empty()){
                stack_first.pop();
                continue;
            }else{
                continue;
            }
        }stack_first.push(first.at(i));
    }for(int i = 0;i < second.length();i++){
        if(second.at(i) == '#'){
            if(!stack_second.empty()){
                stack_second.pop();
                continue;
            }else{
                continue;
            }
        }stack_second.push(second.at(i));
    }while(!stack_first.empty()){
        result_1 = stack_first.top() + result_1;
        stack_first.pop();
    }while(!stack_second.empty()){
        result_2 = stack_second.top() + result_2;
        stack_second.pop();
    }if(result_1 == result_2){
        cout << "True";
    }else{
        cout << "False";
    }
    return 0;
}