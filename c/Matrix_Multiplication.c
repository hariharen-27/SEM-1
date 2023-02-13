#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j, k, nr_a, nc_a, nr_b, nc_b;
    int **A, **B, **C;

    do{
        printf("\nEnter the Number of Rows in Matrix A : ");
        scanf("%d",&nr_a);
    }while(nr_a<=0);

    do{
        printf("\nEnter the Number of Columns in Matrix A : ");
        scanf("%d",&nc_a);
    }while(nc_a<=0);

    A = (int **) malloc (nr_a*sizeof(int *));
    for(i=0;i<nr_a;i++){
        *(A + i) = (int *) malloc (nc_a*sizeof(int));
    }

    printf("\nEnter the Array Elements of Matrix A : ");
    for(i=0;i<nr_a;i++){
        for(j=0;j<nc_a;j++){
            printf("\nMatrix A [%d][%d] : ",i,j);
            scanf("%d",&*(*(A+i)+j));
        }
    }

    do{
        printf("\nEnter the Number of Rows in Matrix B : ");
        scanf("%d",&nr_b);
    }while(nr_b<=0);

    do{
        printf("\nEnter the Number of Columns in Matrix B : ");
        scanf("%d",&nc_b);
    }while(nc_b<=0);

    B = (int **) malloc (nr_b*sizeof(int *));
    for(i=0;i<nr_b;i++){
        *(B + i) = (int *) malloc (nc_b*sizeof(int));
    }

    printf("\nEnter the Array Elements of Matrix B : ");
    for(i=0;i<nr_b;i++){
        for(j=0;j<nc_b;j++){
            printf("\nMatrix B [%d][%d] : ",i,j);
            scanf("%d",&*(*(B+i)+j));
        }
    }

    printf("\nUser Inputted Matrix A : \n");
    for(i=0;i<nr_a;i++){
        for(j=0;j<nc_a;j++){
            printf("%d ",*(*(A+i)+j));
        }
        printf("\n");
    }

    printf("\nUser Inputted Matrix B : \n");
    for(i=0;i<nr_b;i++){
        for(j=0;j<nc_b;j++){
            printf("%d ",*(*(B+i)+j));
        }
        printf("\n");
    }

    if(nc_a == nr_b){
        C = (int **) malloc (nr_a*sizeof(int *));
        for(i=0;i<nr_a;i++){
            *(C + i) = (int *) malloc (nc_b*sizeof(int));
        }
        for(i=0;i<nr_a;i++){
            for(j=0;j<nc_b;j++){
                *(*(C+i)+j) = 0;
                for(k=0;k<nc_a;k++){
                    *(*(C+i)+j) = *(*(C+i)+j) + ((*(*(A+i)+k)) * (*(*(B+k)+j)));
                }
            }
        }

        printf("\nMultiplied Matrix : \n");
        for(i=0;i<nr_a;i++){
            for(j=0;j<nc_b;j++){
                printf("%d ",*(*(C+i)+j));
            }
            printf("\n");
        }
    }
    else{
        printf("\nMatrix Multiplication Cannot be Done ...");
    }
}