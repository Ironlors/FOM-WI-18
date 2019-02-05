#include <stdio.h>
#define PI 3.14159265359

int calc();

int main(int argc, char const *argv[])
{
    int *values=0;
    int rad = 0;

    printf("bitte geben Sie den Radius ein: ");
    scanf("%d",&rad);
    *values = calc(rad);
    printf("Surface: %d\n Volume: %d\n",values[0],values[2]);
    return 0;
}

int calc(int rad){
    double return_val[2];
    double surface = 0;
    double volume = 0;

    volume = (4.0f/3.0f)*PI*(rad*rad*rad);
    return_val[0]= volume;
    printf("volume: %f\n",volume);

    surface = 4*PI*(rad*rad);
    return_val[1]=surface;
    printf("surface: %f\n",surface);
    return (int)return_val;
}

