#include <stdio.h>
#include<limits.h>
void mergesort(int arr[], int p, int q, int r) {
    int i, j, k;
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[p + i-1];
    for (j = 0; j < n2; j++)
        R[j] = arr[ q+ j];
        L[n1] = INT_MAX;
        R[n2] = INT_MAX;
        i=1,j=1;
        for(k=p;k<=r;k++){
            if(L[i]<=R[j]){
                arr[k]=L[i];
                i++;
            }
            else{
                arr[k]=R[j];
                j++;
            }
        }
    }
           void mergesort(int *arr, int p,int q, int r){
    if(p<r){    
        int q=(p+r)/2;
        mergesort(arr,p,q);
        mergesort(arr,q+1,r);
        mergesort(arr,p,q,r);
    }
}

    

    
    




    