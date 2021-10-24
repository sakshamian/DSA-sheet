#include<bits/stdc++.h>
using namespace std;

int maxsum(int arr[], int n){
    int maxend=0,maxsofar=INT_MIN;
    for(int i=0;i<n;i++){
        maxend+=arr[i];
        if(maxsofar<maxend) maxsofar = maxend;
        if(maxend<0) maxend=0;
    }
    return maxsofar;
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxsum(arr,n);
    return 0;
}