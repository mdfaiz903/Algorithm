#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
    int i,j,flag;
    for(i=1;i<n;i++){
        flag = arr[i];
        j=i-1;
        while(j>=0 && arr[j]<flag){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=flag;
    }
}
void display(int arr[],int size){
    int i=0;
    while(i<size){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<"\n";
}
int main(int argc, char const *argv[])
{
    int A[]={25,14,62,20,18};
    int size = sizeof(A)/sizeof(A[0]);
    insertion_sort(A,size);
    cout<<"After sortng : ";
    display( A, size);
   
}
