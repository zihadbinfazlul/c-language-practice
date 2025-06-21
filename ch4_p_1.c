//Write a program to print multiplication table of a given number n.
#include<stdio.h>
int main(){
int i,n;
//ask the number for multiplication tale 
printf("Enter a number to print its multiplication table: ");
scanf("%d", &n);
//print the muliplication table 
printf("multiplication table of %d:\n",n);
for ( i = 1; i <= 10; i++)
{
    printf("%d X %d = %d\n", n,  i, n*i );
}
    return 0;
}