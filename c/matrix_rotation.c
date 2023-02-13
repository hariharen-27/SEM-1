#include<stdio.h>
int main()
{
    int m=4;
    int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i,j,temp;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i>j)
            {
                temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }

    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++)
    {
        int k=m-1;
        for(j=0;j<m/2;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            k--;
        }
    }

    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
