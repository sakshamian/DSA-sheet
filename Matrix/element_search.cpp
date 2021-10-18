#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int x; cin>>x;

    int smallest = arr[0][0], largest = arr[n-1][n-1];
    if(x<smallest && x>largest){
        cout<<-1<<endl;
    }
    else{
        int i=0, j=n-1;

        while(i<n & j>=0){
            if(arr[i][j]==x){
                cout<<"FOUND AT: "<<i+1<<" "<<j+1;
                return 0;
            }
            else if(arr[i][j]>x){
                j--;
            }
            else{
               i++; 
            }
        }
    }
    cout<<"not found"<<endl;
    return 0;
}