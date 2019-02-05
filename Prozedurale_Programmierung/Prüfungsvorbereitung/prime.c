#include <stdio.h>

// declare functions
int is_Prime();
int output();

int main(void){
  int max = 0;
  printf("Bitte gebe die Anzahl an Primzahlen ein: ");
  scanf("%d",&max);
  output(max);
  return 0;
}

int output(int max){
  int i = 2; // aktuelle Zahl
  int durchgang = 0; // durchgang

  do{
    if(is_Prime(i)==1){ // ask if it is a prime
      printf("%d\n",i);
      durchgang++;
    }
    i++;
  }while(durchgang < max);
}

int is_Prime(n){
  int result = 0;
  for(int i = 2; i < n; i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}
