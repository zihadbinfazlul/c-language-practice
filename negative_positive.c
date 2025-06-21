#include<stdio.h>
int main(){
int number;
printf("input a number :");
scanf("%d",&number);
if(number>0){
    printf("the numer is positive");
}
else if(number == 0){
    printf("the number is zero");
}
else{
    printf("the number is negative");
}
//else if also useable


return 0;
}