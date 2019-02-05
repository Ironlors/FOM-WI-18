#include <stdio.h>

int main(void){
  int input[5];
  for(int i = 0; i < 5; i++){
    printf("Bitte gebe %d: ",i);
    scanf("%d",&input[i]);
    printf("\n");
  }

  int max = input[0];
  for(int i = 0; i < 5; i++){
    if(input[i]>max){
      max = input[i];
    }
  }
  printf("%d",max);
}

