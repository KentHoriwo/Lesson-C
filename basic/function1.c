#include <stdio.h>
//円の面積計算をする関数の定義
double calc_area(double radius){
    double area;
    area = 3.14 * radius * radius;
    return area;
}

//関数を呼び出すメイン部分
void main(){
    double radius;
    printf("Enter the radius: ");
    scanf("%lf", &radius);
    printf("The area is: %f\n", calc_area(radius));
}
