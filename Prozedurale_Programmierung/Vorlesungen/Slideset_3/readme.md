## Slideset 3
#### Kontrollfragen (Slide 118)
1. Welchen Wert gibt eine bedingte if-Anweisung zwischen den Klammern () zurück, wenn der Ausdruck der Bedingung richtig oder falsch ist?<br>
Man erwartet, dass der Inhalt der Klammern einen boolean mit `true` oder `false` ausgibt. Da C aber leider keinen boolean hat so wird ein Integer mit den werten `1` oder `0` ausgegeben.
Dies kann mit folgenden Codezeilen getestet werden.
```c
printf("true: %d",1==1);
printf("false: %d",1!=1);
```
2. Wie lautet die alternative Verzweigung einer if-Anweisung und wann wird diese ausgeführt?

Die alternative Verzweigung der if-Anweisung heißt `else`. Diese wird ausgeführt, sobald keine vorherige if-Anweisung ausgeführt wurde.
```c
int x = 1;
if(x==0){
  printf("x == 0");
} else { // every case other then x==0
  printf(" x != 0");
}
```

3. Was können Sie verwenden, wenn Sie mehrere Verzweigungen benötigen.

**else if**
Es ist möglich eine `else if` zu nutzen. Dabei wird sobald die erste Bedingung nicht erfolgreich ist nach einer zweiten Bedingung geschaut. Dies lässt sich beliebig oft wiederholen.
```c
int x = 5;
if(x==0){
  printf("x == 0");
} else if(x==1) {
  printf(" x== 1");
} else if(x==2){
  printf("x==2");
} else {
  printf("x is not 0, 1 or 2");
}
```

**switch case**
Mit Hilfe des `switch case` Konstruktes ist es möglich eine Variable relativ schnell und einfach auf mehrere Möglichkeiten zu überprüfen.
```c
int a=2;

switch(a) {
	case 1: printf("a is 1\n"); break;
	case 2: printf("a is 2\n"); break;
	case 3: printf("a is 3\n"); break;
}
```
4. Welche Bedeutung spielt die Anweisung `break` in einem switch-Konstrukt?

Die `break` Anweisung beendet den aktuellen Codeblock / die aktuelle Schleife und erlaubt so das Programm weiter zu gehen.

5. Wird keine passende case-Marke in einem switch-Konstrukt angesprungen, findet keine Verarbeitung statt. Wie können Sie trotzdem eine optionale Marke im switch-Konstrukt einbauen, die ausgeführt wird, wenn in keine case-Marke gesprungen wird?

Man kann eine `default` Marke einbauen. Diese wird dann automatisch ausgeführt, sobald keine anderer case wahr ist.
```c
int a=2;

switch(a) {
	case 1: printf("a is 1\n"); break;
	case 2: printf("a is 2\n"); break;
	case 3: printf("a is 3\n"); break;
	default: printf("a is something else\n"); break;
}
```

6. In C gibt es 3 logische Operatoren. Nennen Sie diese und geben Sie an, wozu sie in der Regel verwendet werden.

| Zeichen | Name | Verwendung |
| --- | --- | --- |
| && | UND-Operator | Wahr, falls beide Teilaussagen wahr sind |
| \|\| |  ODER-Operator | Wahr, falls min. eine der beiden Teilaussagen wahr ist |
| ! | NICHT-Operator | invertiert den Wahrheitswert der Aussage


#### Kontrollfragen (Slide 129)
1. Welche Schleifen stehen Ihnen zur Verfügung?

- for-loop
```c
for(int i = 0; i < 10; i++){
  // *code*
}
```
- while-loop
```c
int i = 0;
while(i < 10){
  // *code*
  i++;
}
```
- do-while-loop
```c
int i = 0;
do{
  // *code*
  i++;
}while(i < 10);
```

2. Welche Schleife sollten Sie verwenden, wenn mehrere Anweisungen mindestens einmal ausgeführt werden sollen?

In diesem Fall bietet sich die `do-while`-loop an, da hier der Code min. 1 mal ausgeführt wird, bevor eine Überprüfung der Bedingung passiert.

3. Wie können Sie den normalen Schleifenablauf beeinflussen?

| Statement | Verhalten |
| ---- | ---- |
| break | beendet sofort die Schleife |
| continue | überspringt den Codeblock und geht sofort zur Überprüfung der Bedingung |
| goto | springt zu vorher definierten label |

4. Was gibt diese Schleife aus und welcher Fehler wurde hier gemacht?

Das Problem ist, dass der eigetliche Code nur ausgeführt wird, wenn `ìval > 10`. Da ival aber als 0 initialisiert wurde, wird der Code innerhalb der Schleife nie ausgeführt.

5. Im folgendem Beispiel wird nur einmal 0 ausgegeben und dann hängt das Programm in einer Endlosschleife fest. Was wurde falsch gemacht?

```c
int ival = 0;
while (ival < 20){
  if(ival%2){
    continue;
  }
  printf("%d\n",ival);
  ival++;
}
```
Das Problem hier ist, dass sobal `if(ival%2)` ein einziges mal wahr ist, wid die continue Anweisung befolgt. Diese überspringt nun den Rest des Codes und daher wird der Wert von `ival` nicht mehr erhöht. Daher ist`if(ival%2)` wieder wahr und die ganze Prozedur wiederhilt sich.

#### Kontrollfragen (Slide 149)
1. Was ist eine Vorrausdeklaration?

Bei der Vorrausdeklaration wird eine Funktion, welche später benötigt wird bereits am Anfang deklariert. Dies ist nötig, damit die Funktion auch gleich am Anfang verfügbar ist.
Bsp.:
```c
#include <stdio.h>

int square(); // <-- Vorrausdeklaration

int main(void){
  int i = 3;
  int i_square = 0;

  int i_square = square(i);
}

int square(int i){
  int i_square = i*i;
  return i_square;
}
```

2. Versuchen Sie, den Begriff call-by-value etwas ausführlicher zu beschreiben.

Bei dem Begriff `call-by-value` wird nicht die Variable an sich übergeben, sondern nur der Wert der Variable. Würden wir z.B. die zu übergebende Variable ändern, so würden wir nur die lokale Kopie verändern, aber nicht die ursprüngliche Variable.
Im Gegensatz dazu wird beim `call-by-reference` nur der Speicherpunkt der Variable übergeben. Daher hat eine Änderung der Variable einen Effekt auf alle Instanzen, die auf die Variable zugreifen.

3. Was müssen Sie bei der Verwendung eines Rückgabewertes beachten und mit welcher Anweisung können Sie einen Wert aus einer Funktion zurückgeben?

Bei der Rückgabe von Werten muss beachtet werden, dass man den gleichen Datentyp zurückgibt, der auch auf der anderen Seite erwartet wird. Der Befehl für die Rückgabe ist `return x;`

4. Was sind Rekursionen?

Rekursiver Code ist Code, welcher sich selbst aufruft.

5. Beschreiben Sie den Unterschied zwischen einer gloablen und lokalen Variable.

Eine globale Variable ist überall im Programm zugreifbar. Eine lokale Variable dagegen existiert nur in einem begrenzten Gültigkeitsbereich.

6. Was können Sie tun, wenn Sie eine globale Variable verwenden wollen, diese aber nur in der aktuellen Quelldatei und nicht in anderen Quelltexten oder Headerdateien sichrbar sein soll?

Um die Gültigkeit einer Variable auf die aktuelle Quelldatei zu begrenzen, nutzt man das Keyword `static`. Falls ich nun z.B. die variable `i` auf die aktuelle Datei beschränken will, so muss ich die Variable wie folgt initialisieren.
```c
static int i = 42;
```

7. Warum lässt sich das folgende Programm nicht übersetzen?
```c
#include <stdio.h>
#include <stdlib.h>

int main(void){
  float fval = multi(3.33);
  printf("%.2f\n",fval);
  return EXIT_SUCCESS;
}

float multi(float f){
  return (f*f);
}
```
Das Problem hier ist, dass die Funktion `multi` vor dem ersten Abrufen deklariert werden muss. Im aktuellen Script kennt die main die Funktion `multi` noch nicht.
Der korrigierte Code würde wie folgt aussehen:
```c
#include <stdio.h>
#include <stdlib.h>

float multi();

int main(void){
  float fval = multi(3.33);
  printf("%.2f\n",fval);
  return EXIT_SUCCESS;
}

float multi(float f){
  return (f*f);
}
```

8. Was wurde bei diesem Beispiel falsch gemacht?
```c
#include <stdio.h>
#include <stdlib.h>

float volume_Rect(float l, float b, float h){
  float volumen = l*b*h;
}

int main(void){
  float vol = volumen_Rect(10.0,10.0,12.5);
  printf("Volumen: %f\n",vol);
  return EXIT_SUCCESS;
}
```
Die funktion `volume_Rect` hat keinen Rückgabewert. Daher bekommt die main nicht den Wert, welche sie erwartet.

Richtiger Code:
```c
#include <stdio.h>
#include <stdlib.h>

float volume_Rect(float l, float b, float h){
  float volumen = l*b*h;
  return volumen;
}

int main(void){
  float vol = volumen_Rect(10.0,10.0,12.5);
  printf("Volumen: %f\n",vol);
  return EXIT_SUCCESS;
}
```

9. Schreiben Sie das Programm bzw. die Funktion faculty(), in der Sie mit einer Rekursion die Fakultät von n berechnet haben um, damit die Fakultät ohne Rekursion berechnet wird.

**recursive_faculty.c**
```c
#include <stdio.h>

int faculty();

int main(void){
    int n, result;
    printf("please input your number: ");
    scanf("%d",&n);
    result=faculty(n);
    printf("result: %d\n",result);
    return 0;
}

int faculty(int n){
    if(n<1){
        return 1;
    } else {
        return n* faculty(n-1);
    }
}
```

**non_recursive_faculty.c**
```c
#include <stdio.h>

int faculty();

int main(void)
{
    int n, result;
    printf("please input your number: ");
    scanf("%d",&n);
    result=faculty(n);
    printf("result: %d\n",result);
    return 0;
}

int faculty(int n){
    int result = n; // gets initial vaue
    if(n<1){
        return 1;
    } else {
        for(int i = 1; i < n; i++){ // loops through all numbers lower than n
            result = result*(n-i); // multiplies itself with the next lower value
        }
        return result;
    }
}
```
