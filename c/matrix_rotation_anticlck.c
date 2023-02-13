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
        for(j=i;j<m;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
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

    for(j=0;j<m;j++)
    {
        int k=m-1;
        for(i=0;i<m/2;i++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[k][j];
            arr[k][j]=temp;
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
