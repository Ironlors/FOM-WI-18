#include <stdio.h>
#include <stdlib.h>

// defining macros
#define TRUE 1
#define FALSE 0

// initializing functions
int swap();
void output();

int main(){
    // creating variables
    int swap_count = 0;
    int temp_x;
    int temp_y;
    int run = 1;
    int array_length = 0;

    // input

    printf("Wie viele Werte magst du eingeben? ");
    scanf("%i",&array_length);

    // get the array elements
    int input_array[array_length];

    for (int i = 0; i < array_length; i++) {
            printf("bitte gebe Wert %i ein: ",i+1);
            scanf("%i",&input_array[i]);
    }

    // working code

    // shows unsorted array
    printf("unsorted: ");
    output(input_array,array_length);

    do{
        swap_count = 0;
        for(int i = 0; i < array_length-run; i++){

            temp_x = input_array[i];
            temp_y = input_array[i+1];

            if(swap(temp_x,temp_y)==TRUE){
                // swaps both integers
                input_array[i] = temp_y;
                input_array[i+1] = temp_x;
                // indicates that there was a swap
                swap_count++;
            }
        }
        run++;
    }while(swap_count!=0); // ends if there was nothing to swap

    // output
    
    printf("sorted:   ");
    output(input_array,array_length);
    return 0;
}

void output(int array[],int n){
    printf("[ ");
    for(int i = 0 ; i < n; i++){
        printf("%d ",array[i]);
    }
    printf("]\n");
}

int swap(int a, int b){
        if(a <= b) {
                // printf("DEBUG: Swap -> false\n");
                return FALSE;
        } else {
                // printf("DEBUG: Swap -> true\n");
                return TRUE;
        }
}