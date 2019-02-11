## Slideset 6
#### Kontrollfragen (Slide 214)
1. Versuchen Sie, die grundlegende Funktio von Zeigern zu erläutern. Woran erkennt man einen Zeiger?

Ein Zeiger beschreibt nich direkt die Varialbe sondern direkt den Speicherplatz, auf welchen diese vermerkt ist. Der Unterschied ist ähnlich zum Unterschied zwischen `call by value` und `call by reference`.
Mann erkennt Zeiger am `*`.
2. Welcher Wert wird mit den beiden printf-Anweisungen in den Zeilen (06) und (07) ausgegeben?
```c
int *ptr = NULL;
int ival;
ptr = &ival; // ptr is at the space of ival
ival = 98765432; // ival is set to 98765432
*ptr = 23456789; // ptr's space is set to 23456789
printf("%d\n",ival); // ptr's space = ival --> ival = 23456789)
printf("%d\n",*ptr); // ptr =  23456789 ... obviously
```
3. Wo ist der Unterschied zwischen den folgenden beiden Deklarationen?
```c
char *str1 = "Hallo Welt";
char str2[] = "Hallo Welt";
```
`char *str1` speichert den String auf den bestimmten Speicherplatz, welcher bereits vorhanden ist.
`char str2[]` erzeugt eine neue Variable mit neuen Speicherplatz, auf welchem der String gespeichert wird.
