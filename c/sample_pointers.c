#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n, i;

    printf("\nEnter the Number of Elements : ");
    scanf("%d",&n);

    ptr = (int *) malloc (n*sizeof(int));

    for(i=0;i<n;i++){
        printf("\nArray [%d] : ",i);
        scanf("%d",(ptr+i));
    }

    printf("Outputted Array : ");
    for(i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }

}
