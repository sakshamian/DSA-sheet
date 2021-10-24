#include<iostream>
using namespace std;

void uni(int arr1[], int arr2[], int n, int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]) cout<<arr1[i++]<<" ";
        else if(arr1[i]>arr2[j]) cout<<arr2[j++]<<" ";
        else{
            cout<<arr2[j++]<<" ";
            i++;
        }
    }
    while(i<n) cout<<arr1[i++]<<" ";
    while(j<m) cout<<arr2[j++]<<" ";
    cout<<'\n';
}

void inter(int arr1[], int arr2[], int n, int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]) i++;
        else if(arr1[i]>arr2[j]) j++;
        else{
            cout<<arr1[i]<<" ";
            i++,j++;
        }
    }
    cout<<'\n';
}

int main(){
    int n; cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m; cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    uni(arr1, arr2, n, m);
    inter(arr1, arr2, n, m);
    return 0;
}