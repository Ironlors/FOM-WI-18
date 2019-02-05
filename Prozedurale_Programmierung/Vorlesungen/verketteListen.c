#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;
} node_t;

typedef node_t* node_p;
node_p start = NULL;
node_p current = NULL;

int main(int argc, char const *argv[])
{   
    // Variables
    printf("Bitte geben Sie 5 Werte ein.\n");
    for(int i = 0; i < 5 ; i++){
        // Node erzeugen (Pointer und Speicher)
        node_p item = malloc(sizeof(node_t));   // Item wird automatisch in den neuen Speicher geschrieben  
        // Zahl einlesen & schreiben
        scanf("%d",&item->value);
        // Next auf NULL setzen
        item->next=NULL;
        // if 1st Node -> set startPointer
        if (i == 0) {
            start = item;
        } else {
        // else -> verknüpfung vom Vorgänger herstellen (Pointer)
            current -> next = item;
        }
        
        // current_Pointer um 1 erhöhen
        current = item;
    }
    
    current = start;
    
    printf("Liste: ");
    do
    {
        printf("%d ",current->value);
        current = current->next;
    } while (current!=NULL);
    printf("\n");
    return 0;
}
