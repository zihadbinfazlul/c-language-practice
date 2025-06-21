#include<stdio.h>
int main(){
int marks;
printf("input your marks :");
scanf("%d", &marks);
if(marks>=90 && marks<=100){
    printf("the grade is : A");
}
else if(marks>=80){
    printf("the grade is : B");
}
else if(marks>=70){
    printf("the grade is : C");
}
else if(marks>=60){
    printf("the grade is : D");
}
else {
    printf("the grade is : F");
}
return 0;
}