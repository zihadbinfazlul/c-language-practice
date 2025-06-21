#include<stdio.h>
int main(){
int a,b,c;
printf("the largest number is ");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c){
    printf("this is the largest number %d",a);
}
else if(b>a && b>c){
    printf("this is the largest number %d",b);
}
else{
    printf("this is the largest number %d",c);
}

return 0;
}