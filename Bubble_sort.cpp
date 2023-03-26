#include<bits/stdc++.h>
using namespace std;
//function of bubble sort
void bubble_sort(int arr[],int n){
    int i=0,j=0;
    for(i=0;i<n-1;i++){//outer loop for how many time to excute this code
        for(j=0;j<n-i-1;j++){//inner loop
                if(arr[j]>arr[j+1]){
                    //Swaping 2 numbers
                    int temp;
                    temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
        }
}
//print the array after sorting
for(i=0;i<n;i++){
    printf("%d,",arr[i]);
}
}
//main funciton
int main() {
    int arr[]={12,3,5,2,10};
    int n = sizeof(arr)/sizeof(arr[0]);//find length of array
    bubble_sort(arr,n);
    return 0;
}