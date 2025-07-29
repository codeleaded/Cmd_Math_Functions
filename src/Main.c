#include <stdio.h>
#include <math.h>

#include "/home/codeleaded/System/Static/Library/Math.h"

int main(){

    double real = sin(0.5);
    double test = F64_Sin_It(0.5);

    printf("Real: %f vs Test: %f\n",real,test);

    //for(int i = 0;i<=100;i++){
    //    double r = ((double)i / 100.0) * (2 * PI);
    //    printf("%f,\n",sin(r));
    //}

    return 0;
}