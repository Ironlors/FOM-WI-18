## Slideset 2
#### Kontrollfragen

1. Was wird in den folgenden Zeilen für ein Wert ausgegeben?

**output.c**
```c
int i = 1;
printf("i = %d\n", i--); // i = 1
printf("i = %d\n", ++i); // i = 1
printf("i = %d\n", i++); // i = 1
printf("i = %d\n", ++i); // i = 3
```
Begründung:
Bei `i--` bzw. `i++` wird erst I ausgegeben und dann der Wert verändert.<br> Bei `--i` bzw. `++i` wird der Wert erst verändert und dann ausgegeben.

2. Was ist eine implizite Umwandlung?<br>
Bei der impliziten Typumwandlung wird die Umwandlung nicht im Code aufgeführt. Sie wird vom Compiler automatisch anhand der Datentypen von Variablen bzw. Ausdrücken erkannt und durchgeführt.

Bsp.:
```c
int i = 5; // now i is an integer
float f = i; // now i gets converted into a float
```

3. Was ist eine explizite Umwandlung und wann sollten Sie diese gegenüber der impliziten Umwandlung bevorzugen?

Die explizite Umwandlung erlaubt eine höhere Kontrolle über das Programm. Daher sollte man immer die explizite Umwandlung der impliziten Umwandlung bevorzugen.

4. Womit wird eine explizite Umwandlung durchgeführt.<br>
Am besten lässt sich die explizite Umwandlung an einem Beispiel zeigen. Daher machen wir die gleiche Umwandlung wie bei `2.`. Dieses mal wandeln wir die Variablen allerdings explizit um.
```c
int i = 5; // now i is an integer
float f = (float)i; // now i gets converted into a float
```
