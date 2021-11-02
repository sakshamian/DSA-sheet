#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    unordered_set<int> st; 
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0 || st.find(sum)!=st.end()){
            cout<<"YES";
            return 0;
        }
        st.insert(sum);
    }
    cout<<"NO";
    return 0;
}