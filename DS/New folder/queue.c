#include<stdio.h>
#define max 5

int arr[max],i,front=-1,ch,rear=-1;

int main(){
    printf("enter your choice");
    scanf("%d",&ch);
    while(1){
    switch(ch)
    {
    case 1:
        insert();
        break;
    case 2:
        delete();
        break;
    case 3:
        show();
        break;
    case 4:
        exit(0);

    }
    }
    void insert(){

    }
}
