/*
 * Copyright Kay Kleinvogel (c) 2019.
 */


import java.util.Scanner;

public class Seite_1 {
    public static void main(String[] args) {
        System.out.println("**********Task 1**********");
        task_1(); // Aufrufen der 1. Aufgabe
        System.out.println("**********Task 2**********");
        task_2(); // Aufrufen der 2. Aufgabe
        System.out.println("**********Task 4**********");
        task_4();
        System.out.println("**********Task 5**********");
        task_5();
    }
    /*
     Schreiben Sie eine prozedurale Java-Applikation, die dem Benutzer erlaubt drei Zahlen einzugeben. Aus
     diesen Werten soll das Produkt und die Summe berechnet werden.
     */
    private static void task_1() {
        // deklaration von Variablen
        int product = 1;
        int sum = 0;
        int int_input = 0;

        // Initialisierung des Scanners
        Scanner sc = new Scanner(System.in);

        // Loop um den User nach Eingabewerten zu fragen
        for (int i = 0; i < 3; i++){
            System.out.println("Please input an Integer");
            int_input = Integer.parseInt(sc.nextLine()); // Zwischenspeicherung der Eingabe als Integer
            sum = sum + int_input;
            product = product * int_input;
        }
        // Ausgabe der Ergebnisse
        System.out.println("Summe: " + sum);
        System.out.println("Produkt: " + product);
        sc.close(); // beenden des Scanners
    }

    /*
     Bestimmen Sie diese Werte und berechnen Sie die jeweilige Abweichung vom exakten Wert, von der
     Java-Konstanten Math.PI (So benutzen!) zur Verfügung gestellt wird.
     */
    private  static void task_2(){
        // Berechnung der Werte
        float babylon = 3*(1f/8f);
        float egypt = (16f/9f)*(16f/9f);
        double china = Math.sqrt(10);
        double europe = 3*(1f/7f);

        // Ausgabe der Differenzen als Absoluter Wert
        System.out.println("Babylon: " + Math.abs(Math.PI - babylon));
        System.out.println("Egypt: " + Math.abs(Math.PI - egypt));
        System.out.println("China :" + Math.abs(Math.PI - china));
        System.out.println("Europe: " + Math.abs(Math.PI - europe));
    }

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
}
