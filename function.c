#include <stdio.h>

double calc_area(double radius){
    double area;
    area = 3.14 * radius * radius;
    return area;
}

void main(){
    double radius;
    printf("Enter the radius: ");
    scanf("%lf", &radius);
    printf("The area is: %f\n", calc_area(radius));
}
