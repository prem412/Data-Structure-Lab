#include <stdio.h>
int main(){
int arr[11]={65,35,50,90,75,45,40,60,95,25,85};
int n,i,j,key;;
for(i=1;i<n-1;i++){
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key){
    arr[j+1]=arr[j];
    j--;
}
arr[j+1]=key;
}
}


    