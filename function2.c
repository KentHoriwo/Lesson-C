#include <stdio.h>

//プロトタイプ宣言
double circle_arc(double);

void main(){
    double radius;
    printf("Enter the radius: ");
    scanf("%lf", &radius);
    printf("The area is: %f\n", circle_arc(radius));
}

//関数の定義
double circle_arc(double radius){
    double arc;
    arc = 3.14 * 2 * radius;
    return arc;
}
