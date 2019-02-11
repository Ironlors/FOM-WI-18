## Slideset 1
#### Kontrollfragen
1. Welche grundlegenden Datentypen für Ganzzahlen gibt es?
- Integer
- Short
- Long
- Long Long
2. Womit können Sie eine Integervariable ohne Vorzeichen vereinbaren?
- unsigned Integer
3. Aufgrund verschiedner Datenmodelle ist die Breite von Datentypen implementierungsabhängig. Was können Sie tun, wenn Sie einen Ganzzahltypen mit fester Breite benötigen?
definiert seit C99 in `<stdint.h>`

type | size  | type
---|---|---
int8_t | 8 bit | signed int
int16_t | 16 bit | signed int
int32_t | 32 bit | signed int
int64_t | 64 bit | signed int
uint8_t | 8 bit | unsigned int
uint16_t | 16 bit | unsigned int
uint32_t | 32 bit | unsigned int
uint64_t | 64 bit | unsigned int
4. Nennen Sie den grundlegenden Datentypen,für Zeichen verwendet wird.
 - char
5. Ermitteln Sie die Größe in Byte der Datentypen int und long long auf Ihrem System.

**sizeof.c**
```c
#include<stdio.h>

int main(void){
    int i = 0;
    long long ll = 0;
    printf("sizeof(int): %lu Byte\n",sizeof(i));
    printf("sizeof(long long): %lu Byte\n",sizeof(ll));
}
```

6. Womit können Sie die implementierungsabhängigen minimalen und maximalen Wertbereiche für Ganz- und Gleitkommazahlen ermitteln?

**min_max.c**
```c
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
```
7. Was bewirkt das Schlüsselwort `const` vor einem Datentyp?
Das Schlüsselwort `const` macht aus der Variablen eine Konstante. Diese kann während der Laufzeit nicht geändert werden.
