#include<stdio.h>

int main(void){
    printf("hello,world\n");
    printf("\"hello,world\"\n");
    
    int x;
    double y;
    x = 1;
    y = 0.5;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("y = %f\n", y);
    printf("y = %f\n", x + y);
}