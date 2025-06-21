
#include<stdio.h>
int main(){

int leanth, breadth, height;
printf("1input the breadth :");
scanf("%d", &breadth);
printf("input the leanth :");
scanf("%d", &leanth);
printf("input the height :");
scanf("%d", &height);

if(breadth+leanth > height && breadth+height > leanth && height+leanth > breadth){
    printf("this is a tringle");
}
else {
    printf("this is not a tringle");
}
    return 0;
}
/*   anoter mathode from gpt       

#include <stdio.h>

int main() {
    int a, b, c;

    // Input the three sides
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check triangle validity
    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}
*/