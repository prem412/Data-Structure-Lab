#include <stdio.h>
#include<limits.h>
void partition(int arr[], int p, int q);
    int x=arr[p];
    int i=p;
    for(int j=p+1;j<=q;j++){
        if(arr[j]<=x){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    void quicksort(int arr[], int i,int r){
if(p<q){
    m=partition(arr,p,q);
    quicksort(arr,p,m-1);
    quicksort(arr,m+1,q);
}
    }


   