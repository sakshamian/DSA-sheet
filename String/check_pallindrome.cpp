#include<bits/stdc++.h>
using namespace std;

bool check(string str){
    int start=0, end=str.size()-1;

    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    string str;
    getline(cin,str);

    if(check(str)) cout<<"YES";
    else cout<<"NO";
    return 0;
}