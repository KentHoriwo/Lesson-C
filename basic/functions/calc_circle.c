#include "calc_circle.h"

double circle_area(double radius){
    double area;
    area = 3.14 * radius * radius;
    return area;
}

double circle_arc(double radius){
    double arc;
    arc = 3.14 * 2 * radius;
    return arc;
}
