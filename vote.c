#include<stdio.h>
int main(){
int age;
printf("how old are you?\n");
scanf("%d", &age);
if(age>=18){
    printf("you are eligable for voteing");
}
else{
    printf("you are not eligable for voting");
}
    return 0;
}