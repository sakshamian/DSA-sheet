#include<bits/stdc++.h>
using namespace std;

void solve(string str){
    map<char,int> mp;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main(){
    string str;
    getline(cin,str);

    solve(str);
    return 0;
}