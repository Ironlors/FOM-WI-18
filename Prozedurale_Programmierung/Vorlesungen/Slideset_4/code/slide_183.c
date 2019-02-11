#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void){
  int ival[MAX];
  for(int i = MAX-1 ; i > 0; i--){ // orignial(int i = MAX; i > 0; i--), tries to write to ival[10] which it has no acess to.
    ival[i] = i;
  }
  for(int i = 1; i < MAX; i++){ // original (int i = 1; i < MAX; i++), started with int[0] which was not set
    printf("%d\n", ival[i]);
  }
  return EXIT_SUCCESS;
}