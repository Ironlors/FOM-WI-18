#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
  printf("min.int-Wert: %d\n", INT_MIN);
  printf("max.int-Wert: %d\n", INT_MAX);
  printf("min.float-Wert: %d\n", INT_MIN);
  printf("max.float-Wert: %d\n", INT_MAX);
  printf("min.float-Wert: %f\n", -FLT_MAX);
  printf("max.float-Wert: %f\n", FLT_MAX);
}