#include<stdio.h>
#include<math.h>
    double get_double(char *prompt , float min , float max);
int main() {
    double x = get_double ("Enter a number:  ", -100 , 100);
    double y = get_double ("Enter another number:  " , -100 , 100);
    double d = sqrt(pow(x,2) + pow (y , 2));
    printf("Distance is %f \n" , d);
}