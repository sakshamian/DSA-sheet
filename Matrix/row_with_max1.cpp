//this approach works only when each row is sorted.
//you can use brute force for unsorted matrices

#include<iostream>
using namespace std;

int solve(int mat[], int low, int high){
    if(high>=low){
        int mid = low + (high - low)/2;
        if((mid==0 || mat[mid-1]==0) && mat[mid]==1){
            return mid;
        }
        else if(mat[mid]==0){
            return solve(mat, mid+1,high);
        }
        else{
            return solve(mat,low,mid-1);
        }
    }
    return -1;
}
int main(){
    int r,c;
    cin>>r>>c;
    int mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }

    int ans=0,max=-1;
    int index;
    for(int i=0;i<r;i++){
        index = solve(mat[i],0,c-1);
        if(index!=-1 && c-index>max){
            max = c-index;
            ans=i;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}