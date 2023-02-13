#include<stdio.h>
#include<stdlib.h>

int main(){
    int **ptr;
    int m, n, i, j;

    printf("\nEnter the Number of Rows : ");
    scanf("%d",&m);
    printf("\nEnter the Number of Columns : ");
    scanf("%d",&n);

    
    ptr = (int **) malloc (m*sizeof(int *));
    for(i=0;i<m;i++){
        *(ptr + i) = (int *) malloc (n*sizeof(int));
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\nArray [%d][%d] : ",i,j);
            scanf("%d",*(ptr+i)+j);
        }
    }

    printf("Outputted Array : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",*(*(ptr+i)+j));
        }
    printf("\n");
    }
}