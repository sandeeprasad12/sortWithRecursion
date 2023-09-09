#include<bits/stdc++.h>
using namespace std;
void bubbleSortingReccursively(int arr[],int n){
    bool isSwapped=false;
    for(int i=0;i<n-1;i++){
        
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            isSwapped=true;
        }
    }
    if(!isSwapped)return;
    if(n<=1)return;
    bubbleSortingReccursively(arr,n-1);
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    bubbleSortingReccursively(arr,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}