#include<bits/stdc++.h>
using namespace std;

void permute(string str, int l , int r){
    if(l==r){
        cout<<str<<'\n';
    }
    else{
        for(int i=l;i<=r;i++){
            swap(str[l],str[i]);
            permute(str,l+1,r);
            swap(str[i],str[l]);
        }
    }
}
int main(){
    string str;
    cin>>str;

    int n = str.size();
    permute(str,0,n-1);
    return 0;
}