#include<stdio.h>
//gd is the abbreviation of get_distance
double get_double(char *prompt , float min , float max){
    float input;
    do {
        printf("%s" , prompt);
        scanf("%f", &input);
        if(input < min)printf("Must be at least %f \n" , min);
        if(input > max)printf("mast be  at most %f \n" , max);
    }
    while(input < min || input > max);
    return input;
}