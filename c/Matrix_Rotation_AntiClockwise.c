#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, temp, m, n, k;
    int **arr;

    do{
        printf("\nEnter the Number of Rows : ");
        scanf("%d",&m);
    }while(m<=0);

    do{
        printf("\nEnter the Number of Columns : ");
        scanf("%d",&n);
    }while(n<=0);

    if(m==n){
        arr = (int **) malloc (m*sizeof(int *));  //pointer pointing to the array of pointers
        for(i=0;i<m;i++){
            *(arr + i) = (int *) malloc (n*sizeof(int));
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

        for(i=0;i<m;i++){
            for(j=i;j<n;j++){
                temp=*(*(arr+i)+j);
                *(*(arr+i)+j)=*(*(arr+j)+i);
                *(*(arr+j)+i)=temp;
            }
        }

        printf("\nTransposed Matrix : \n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%d ",*(*(arr+i)+j));
            }
            printf("\n");
        }

        for(j=0;j<n;j++){
            k=n-1;
            for(i=0;i<m/2;i++){
                temp=*(*(arr+i)+j);
                *(*(arr+i)+j)=*(*(arr+k)+j);
                *(*(arr+k)+j)=temp;
                k--;
            }
        }

        printf("\nAntiClockwise Rotated Matrix : \n");
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                printf("%d ",*(*(arr+i)+j));
            }
            printf("\n");
        }
    }
    else{
        printf("\nNot a Square Matrix");
    }
}
