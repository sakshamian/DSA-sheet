#include<bits/stdc++.h>
using namespace std;

bool check(string given, string second){
    if(given.size()!=second.size()){
        return false;
    }
    string temp = given + given;
    return (temp.find(second) != string::npos);
}
int main(){
    string given;
    string second;
    getline(cin,given);
    getline(cin,second);

    if(check(given,second))  cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}