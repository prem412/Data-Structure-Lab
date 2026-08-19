#include <stdio.h>
int main(){
int arr[11]={65,35,50,90,75,45,40,60,95,25,85};
int i,j;
int n=11;
for(i=0;i<n;i++){
    int min=i;
    for(j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
            min =j;
        }
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
}
for (i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}