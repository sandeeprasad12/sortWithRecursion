#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
     if(n<=1)return;
     insertionsort(arr,n-1);
     int key=arr[n-1];
     int j=n-2;
     while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
     }
     arr[j+1]=key;
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    insertionsort(arr,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}