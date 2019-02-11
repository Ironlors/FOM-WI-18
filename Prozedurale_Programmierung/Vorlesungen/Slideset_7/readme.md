## Slideset 7
#### Kontrollfragen (Slide 222)
1. Welche Funktionen stehen Ihnen zur Verfügung, wenn Sie die Laufzeit eines Speichers vom Heap anfordern möchten? Beschreiben Sie kurz die Unterschiede der einzelnen Funktionen.

| Command | Beschreibung |
|------|-----|
|malloc|sichert Speicherplatz. Hält aber alte Werte |
| calloc | sichert Speicherplatz. Überschreibt alte Werte mit 0 |

2. Im folgenden Codeausschnitt wurde ein übler Fehler gemacht. Welcher?
```c
int *array1=NULL, *iarray2=NULL;
iarray1 = malloc( BLK * sizeof(int)); // (int *)malloc, since void pointer has the be casted to int pointer
iarray2 = malloc( BLK * sizeof(int)); //(int *) malloc
/* code */
for(int i = 0; i<BLK; i++){
  iarray1[i]=i;
  iarray2[i]=i+i;
}
iarray1 = iarray2;
iarray2 = iarray1; // da iarray1 = iarray2 --> iarray2 = iarray2,  verändert nicht den Wert von iarray2

// ggf. Speicher freigeben. Leider nicht klar, ob das nicht später geschieht / Speicher später benötigt wird.
// free(iarray1)
// free(iarray2)
```
#### Kontrollfragen (Slide 235)
