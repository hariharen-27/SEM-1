#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, k, ci, min_row, found=0, m, n;
    int **arr;

    do{
        printf("\nEnter the Number of Rows : ");
        scanf("%d",&m);
    }while(m<=0);

    do{
        printf("\nEnter the Number of Columns : ");
        scanf("%d",&n);
    }while(n<=0);

    arr = (int **) malloc(m*sizeof(int *));
    for(i=0;i<m;i++){
        *(arr+i) = (int *) malloc(n*sizeof(int));
    }

    printf("\nEnter the Array Elements : ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\nArray[%d][%d] : ",i,j);
            scanf("%d",&*(*(arr+i)+j));
        }
    }

    printf("\nUser Array : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }

    printf("\n\n");
    for(i=0;i<m;i++){
        min_row=*(*(arr+i)+0);
        for(j=0;j<n;j++){
            if(min_row>=*(*(arr+i)+j)){
                min_row=*(*(arr+i)+j);
                ci=j;
            }
        }
        for(k=0;k<m;k++){
            if(min_row<arr[k][ci])
                break;
        }
        if(k==m){
            found=1;
            printf("Saddle Point - %d found at \nRow - %d and \nColumn - %d\n",min_row,i,ci);
        }
    }

    if(found==0){
        printf("\nThere is No Saddle Point!!\n\n");
    }
}
