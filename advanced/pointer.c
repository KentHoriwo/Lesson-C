#include<stdio.h>

void swap(double *, double *);
void show(double *, double *);

void main()
{
    double x, y;
    x = 1;
    y = 0.5;
    printf("x = %d\n", x);
    printf("x = %p\n", &x);
    show(&x, &y);
    swap(&x, &y);
    show(&x, &y);
}

void swap(double *x, double *y){
    double tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void show(double *x, double *y){
    printf("x = %f(%x)\n", *x, x);
    printf("y = %f(%x)\n", *y, y);
}