#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_ending_here =1 , min_ending_here=1;
    int max_so_far =0,flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            max_ending_here = max_ending_here*arr[i];
            min_ending_here = min(min_ending_here*arr[i],1);
            flag=1;
        }
        else if(arr[i]==0){
            max_ending_here = min_ending_here = 1;
        }
        else{
            int temp = max_ending_here;
            max_ending_here = max(min_ending_here*arr[i],1);
            min_ending_here = temp*arr[i];
        }
        max_so_far = max(max_so_far,max_ending_here);
    }
    cout<<max_so_far<<endl;
    return 0;
}