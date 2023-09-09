#include<bits/stdc++.h>
using namespace std;
void selectionSortRecursively(int arr[],int idx,int n){
    if(idx==n)return;
    int minIdx=idx;
    for(int i=idx+1;i<n;i++){
        if(arr[i]<arr[minIdx]){
            minIdx=i;
        }
    }
    if(minIdx!=idx)swap(arr[idx],arr[minIdx]);
    selectionSortRecursively(arr,idx+1,n);
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    selectionSortRecursively(arr,0,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}