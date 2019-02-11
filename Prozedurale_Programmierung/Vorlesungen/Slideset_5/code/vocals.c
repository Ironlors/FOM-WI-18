#include <stdio.h>
#include <stdlib.h>

int main(void){
  char v[5] = {'A','E','I','O','U'};
  int size_of_array = sizeof(v)/sizeof(v[0]);
  printf("Die einzelnen Vokale: \n");
  for(int i=0; i < size_of_array; i++){
    printf("%c (Dezimal: %d)\n",v[i],(int)v[i]);
  }
  printf("Alle zusammen: %s\n",v);
  return EXIT_SUCCESS;
}