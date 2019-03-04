# Objektorientierte Programmierung

### Aufgabenblatt 1

**Aufgabe 1:**
Schreiben Sie eine prozedurale Java-Applikation, die dem Benutzer erlaubt drei Zahlen einzugeben. Aus
diesen Werten soll das Produkt und die Summe berechnet werden.

**Aufgabe 2:**
Seit Jahrtausenden versuchen die Menschen, die Kreiszahl π, die definiert ist als Kreisumfang dividiert
durch Kreisdurchmesser, möglichst exakt zu bestimmen.
So rechneten die Babylonier ca. 2000 v. Chr. mit dem Wert 3 mal ein Achtel,
in Ägypten ist seit ungefähr der gleichen Zeit der Wert (16/9)2 überliefert,
in China wurde seit ca. 250 n. Chr. √10 benutzt
und in Europa ist seit Archimedes (ca. 250 v. Chr.) 3 mal ein Siebtel eine bekannte Näherung.
Bestimmen Sie diese Werte und berechnen Sie die jeweilige Abweichung vom exakten Wert, von der
Java-Konstanten Math.PI (So benutzen!) zur Verfügung gestellt wird. Hinweis: Die Wurzelfunktion
können Sie in Java mittels Math.sqrt(einzusetzender Wert) aufrufen.

**Aufgabe 3:**
Fehlerhafte Version (5 Fehler)
```java
public LokaleVariable {
  public static void main(String arg []) {
    System.out.println ("Bitte geben Sie eine Zahl ein!");
    int zahl = Tools.stringEingabe();
    if (zahl=0){
      String ergebnis = "Superheld!"
    }
    else {
      String ergebnis = "Niete!";
    }
  System.out.println(ergebnis);
  }
}
```
Korrigierte Version
```java
public class LokaleVariable {
  public static void main(String arg []) {
    String ergebnis = "";
    System.out.println ("Bitte geben Sie eine Zahl ein!");
    int zahl = Tools.intEingabe();
    if (zahl==0){
      String ergebnis = "Superheld!";
    }
    else {
      ergebnis = "Niete!";
    }
  System.out.println(ergebnis);
  }
}
```

**Aufgabe 4**
- Schreiben Sie eine kleine Java-Applikation, die eine Zufallszahl ermittelt.
- Je nach Zufallszahl erscheinen verschiedene Ausgaben auf dem Bildschirm.
- Wenn die Zufallszahl gerade ist, erscheint die Meldung: “Sie haben gewonnen!”.
- Wenn die Zahl ungerade ist, erscheint die Meldung: “Sie haben verloren!”
- Wenn es sich um eine gerade Zahl gehandelt hat, dann muss noch getestet werden, ob die Zufallszahl
- kleiner als 50 ist, dann erscheint eine Mitteilung: “Sie sind ein Glückspilz!”
- Sollte die Zahl sogar kleiner 10 sein, erscheint eine zusätzliche Mitteilung: “Sie müssen das Glück der ganzen Welt gebunkert haben!”
```Java
private static void task_4() {
    double i  = Math.random()*100 + 1; // generate a random number (Math.random() returns a double)
    int int_i= (int) Math.round(i); // convert the double to an Integer
    System.out.println("Debugging: " + int_i); // print the Integer to check the result
    if(int_i % 2 == 0){ // continues if it's an even number
        System.out.println("Gewonnen");
        if(int_i < 50){
            System.out.println("Sie Glückpilz");
            if(int_i < 10){
                System.out.println("Sie müssen das Glück der Welt gebunkert haben");
            }
        }
    } else { // continues if it's an odd number
        System.out.println("Verloren");
    }

}
```

**Aufgabe 5**
Sie planen eine große Feier.
- Die Gäste dürfen zwischen 7 verschiedenen Getränken wählen. Sie dürfen soviel trinken, wie sie wollen. Sie wollen allerdings am Ende des Abends wissen, wie viele Getränke an die Gäste ausgeteilt wurden.
- Schreiben Sie ein Programm, das ein Menü von 7 Getränken (Text auf dem Bildschirm) immer wiederholt und den Gästen eine Eingabe erlaubt.
- Wird ein Getränk gewählt, wird dieses gezählt (switch).
- Zusätzlich zu den einzelnen Mengen, soll am Ende auch die Gesamtmenge an Getränken berechnet werden.
-  Verwenden Sie für ihr Programm eine vorprüfende Schleife(am günstigsten while)!

```Java
private static void task_5(){
        // Initialisierung der Variablen
        int selection;
        int wasser = 0 , cola = 0, tee = 0, eistee = 0, apfelsaft = 0, selter = 0, milch = 0;
        boolean cancel = false;

        Scanner sc = new Scanner(System.in); // startet den Scanner

        while(!cancel){ // wiederholt, falls die Abbruchbedingung nicht erfüllt ist
            // Gibt das "Menü" aus
            System.out.println("1) Wasser");
            System.out.println("2) Cola");
            System.out.println("3) Tee");
            System.out.println("4) Eistee");
            System.out.println("5) Apfelsaft");
            System.out.println("6) Selter");
            System.out.println("7) Milch");
            System.out.println("default: beenden");

            selection = Integer.parseInt(sc.nextLine()); // holt input und wandelt in Integer um

            // erhöht den count je nach Auswahl
            switch (selection){
                case 1: wasser += 1; break;
                case 2: cola += 1; break;
                case 3: tee += 1; break;
                case 4: eistee += 1; break;
                case 5: apfelsaft += 1; break;
                case 6: selter += 1; break;
                case 7: milch += 1; break;
                default: cancel = true; break; // setzt Abbruchbedingung auf wahr, um die Schleife  zu beenden
            }
        }
        sc.close(); // beendet den Scanner

        // gibt die Finale Abrechnung aus
        System.out.println("Abrechnung");
        System.out.println("Wasser: "+ wasser);
        System.out.println("Cola: "+ cola);
        System.out.println("Tee: "+ tee);
        System.out.println("Eistee: "+ eistee);
        System.out.println("Apfelsaft: "+ apfelsaft);
        System.out.println("Selter: "+ selter);
        System.out.println("Milch: "+ milch);
    }
```
