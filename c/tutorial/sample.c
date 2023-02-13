#include<stdio.h>
int main(){
    int sum[10],ele,a[10],n,k=0,m,count=0;
    printf("enter the sum");
    scanf("%d",&n)

    printf("enter the number of element");
    scanf("%d",&ele);
    for(int i = 0; i < ele; ++i) {

     scanf("%d", &a[i]);
  }
  for(int i=0;i<ele;i++){
      for(int j=0;j<ele;j++){
          if((i>j)&&(i!=j)){
                sum[m]=a[i]+a[j];
                m++;

          }

      }
for (k=0 ; k<m;k++){
    if (sum[i]==n){
            count++;

    }
}

printf("%d",count++);
  }



}
