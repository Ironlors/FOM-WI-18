#include <stdio.h>
#include <stdlib.h>


int main(void) {
        // declaration
        int max_ammount = 0;
        int searched_integer = 0;
        int searched_counter = 0;

        // ask for the max_ammount
        do {
                printf("Wie viele Werte magst du eingeben? ");
                scanf("%i",&max_ammount);
        } while(max_ammount < 1 || max_ammount >= 100); // check if max_ammount is in limit

        // get the array elements
        int input_array[max_ammount];
        for (int i = 0; i < max_ammount; i++) {
                printf("bitte gebe Wert %i ein: ",i+1);
                scanf("%i",&input_array[i]);
        }

        // ask for searched integer value
        printf("Welchen Wert magst du suchen? ");
        scanf("%i",&searched_integer);

        // go through each array element and check for the searched value
        for (int i = 0; i < max_ammount; i++) {
                if(input_array[i]==searched_integer) {
                        // give found position of value and increment counter
                        printf("%i an Stelle: %i\n",searched_integer, i);
                        searched_counter++;
                }
        }

        // give output related to ammount of occurances / Error code if element not found
        if(searched_counter == 0) {
                printf("ERROR 404: %i not found\n",searched_counter);
        } else {
                printf("%i wurde %i mal gefunden.\n",searched_integer, searched_counter);
        }

        return 0;
}
