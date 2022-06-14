#include <stdio.h>
#include "calc_circle.h"

void main(){
    double radius;
    printf("Enter the radius: ");
    scanf("%lf", &radius);
    printf("The area is: %f\n", circle_area(radius));
    printf("The arc is: %f\n", circle_arc(radius));
}
