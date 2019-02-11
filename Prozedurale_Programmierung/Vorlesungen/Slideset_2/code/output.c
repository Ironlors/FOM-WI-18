#include <stdio.h>

int main(void){
    int i = 1;
    printf("i = %d\n", i--); // i = 1
    printf("i = %d\n", ++i); // i = 1
    printf("i = %d\n", i++); // i = 1
    printf("i = %d\n", ++i); // i = 3
}