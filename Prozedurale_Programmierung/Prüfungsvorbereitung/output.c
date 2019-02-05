#include <stdio.h>
int d = 70;
int a = 80;

int function2(int g, int h){
  int a = 0;
  printf("%d\n",g);     // Ausgabe 1
  printf("%d\n",a);     // Ausgabe 2
  a = g+h;
  return a;
}

int main(void){
  int a = 4, b = 3;
  a = function2(a, b);
  printf("%d\n",a);     // Ausgabe 3
  printf("%d\n",d);     // Ausgabe 4
  int *c = NULL;
  c = &b;
  *c = 5;
  printf("%d\n",b);     // Ausgabe 5
  printf("%d\n",*c);    //Ausgabe 6
  b = *c;
  *c = a+b;

  printf("%d\n",&c);    // Ausgabe 7
  printf("%d\n",b);     // Ausgabe 8
  printf("%d\n",&b);    // Ausgabe 9
  printf("%d\n",a);     // Ausgabe 10

}

