#include<bits/stdc++.h>
using namespace std;
void reversearray(int a[],int start,int end){
    while(start<end){
        int temp = a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    reversearray(arr,0,n-1);
    display(arr,n);
    return 0;
}
