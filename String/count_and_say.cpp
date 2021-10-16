#include<bits/stdc++.h>
using namespace std;

string countsay(int n){
    string str ="";
    if(n==1) return "1";
    if(n==2) return "11";

    string ans="11";
    for(int i=3;i<=n;i++){
        int len = ans.size();

        int cnt =1;
        string tmp = "";
        for(int j=1; j<=len; j++){
            if(ans[j] != ans[j-1]){
                tmp += cnt+'0';
                cout<<tmp<<endl;
                tmp+=ans[j-1];
                cnt=1;
            }
            else
            cnt++;
    }
        ans = tmp;
    }
    return ans;
}
int main(){
    int n; cin>>n;
    cout<<countsay(n);
    return 0;
}