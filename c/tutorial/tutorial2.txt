#include<stdio.h>
int main(){
    int i,number=0;

    for(i=0;i<len(digit);i++){
            if (digit[i]<=digit[i+1]){
                number+=digit[i+1]-digit[i];
                }
            else{
                number+=digit[i+1]+digit[i];
                i++;
            }
            i++;
    }
    printf("the decimal value is %d",number);


}
// function
int digit(int digits){
   char c[20]="I";
 switch(c)
    case"I":
        return 1;
    case"V":
        return 5;
    case"X":
        return 10;
    case"L":
        return 50;
    case"C":
        return 100;
    case"D":
        return 500;
    case"M":
        return 1000;

        }
