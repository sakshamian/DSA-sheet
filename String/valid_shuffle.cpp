#include<bits/stdc++.h>
using namespace std;

bool check(string s1, string s2, string final){
    if(final.size() != s1.size()+s2.size()){
        return false;
    }
    string temp = s1+s2;
    sort(temp.begin(),temp.end());
    sort(final.begin(),final.end());

    return (temp == final);
}
int main(){
    string s1,s2,final;
    cin>>s1>>s2>>final;
    if(check(s1,s2,final)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return  0;
}