## Slideset 5
#### Kontrollfragen (183)
1. Schreiben Sie eine Funktion, die zwei int-Arrays auf Gleichheit überprüft. Die Funktion soll `-1` zurückgeben, wenn beide Arrays gleich sind, oder die Position, an der ein Unterschied gefunden wurde. `-2` soll zurückgegeben werden, wenn beide Arrays unterschiedlich lang sind.
2. Im folgenden Listing wurden gleich zwei Fehler gemacht. Welche?

```c
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void){
  int ival[MAX];
  for(int i = MAX; i > 0; i--){
    ival[i] = i;
  }
  for(int i = 0; i < MAX; i++){
    printf("%d\n", ival[i]);
  }
  return EXIT_SUCCESS;
}
```

Korrigierte Antwort:
**slide_183.c**
```c
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
```

#### Kontrollfragen (Slide 192)
1. Schreiben Sie eine Funktion, die in einem String ein bestimmtes Zeichen durch ein anderes Zeichen ersetzt.
2. Auch wenn das folgende Programm korrekt ausgeführt wird, ist ein Fehler enthalten. Welcher?
```c
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void){
  char v[5] = {'A','E','I','O','U'};
  printf("Die einzelnen Vokale: ");
  for(int i=0; i < 5; i++){
    printf("%c (Dezimal: %d)\n",v[i],v[i]);
  }
  printf("Alle zusammen: %s\n",v);
  return EXIT_SUCCESS;
}
```

verbesserter Code
**vocals.c**
```c
#include <stdio.h>
#include <stdlib.h>

int main(void){
  char v[6] = {'A','E','I','O','U','\0'};
  int size_of_array = sizeof(v)/sizeof(v[0]);
  
  printf("Die einzelnen Vokale: \n");
  for(int i=0; i < size_of_array; i++){
    printf("%c (Dezimal: %d)\n",v[i],(int)v[i]);
  }
  printf("Alle zusammen: %s\n",v);
  return EXIT_SUCCESS;
}
```
