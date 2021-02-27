#include<stdio.h>
int main(){
    int i,j,arr[]={12,3,10,5,1};
    int size=5;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("After sorting : ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}