#include<bits/stdc++.h>
using namespace std;

void reverse(string str){
    if(str.size()==0){
        return;
    }
    string rev = str.substr(1);
    reverse(rev);
    cout<<str[0];
}
int main(){
    string str;
    getline(cin,str);

    reverse(str);
    return 0;
}