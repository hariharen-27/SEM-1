//longest bitonic subarray

#include<stdio.h>
#include<stdlib.h>

int main(){
int arr[100],i,j,n,k,count=0,max=0;
printf("enter the size of array:");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){

    for(j=i+1;j<n;j++){
            count=0;
        if(arr[i]<arr[j]){
                k=j+1;
            while(arr[j]<arr[k] && arr[k]!=n+1){
                count++;
                j=k;
                k++;

            }
            while(arr[j]>arr[k] && arr[k]!=n+1){
                count++;
                j=k;
                k++;
            }

            }

            else if(arr[i]>arr[j]){
                k=j+1;
            while(arr[j]>arr[k] && arr[k]!=n+1){
                count++;
                j=k;
                k++;

            }
            while(arr[j]<arr[k] && arr[k]!=n+1){
                count++;
                j=k;
                k++;
            }

            }
        }

    }
    if(max<count){
        max=count;
    }

printf("the maximum length of bitonic subarray is:%d",max);
}
