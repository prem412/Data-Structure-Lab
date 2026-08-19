#include <stdio.h>
int main(){
    int arr[11]={65,35,50,90,75,45,40,60,95,25,85};
    int i,j,temp;
    for(i=0;i<11;i++)
    {
        for(j=i+1;j<11;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array is:\n");
    for(i=0;i<11;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}