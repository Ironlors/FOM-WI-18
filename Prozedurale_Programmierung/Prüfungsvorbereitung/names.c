#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char search_char = ' ';
    char name_list[20][20]={};
    int  lenght_of_list = sizeof(name_list)/sizeof(name_list[0]);

    int limit = 0;
    printf("Bitte gebe die Anzahl der Namen ein (max. 20): ");
    scanf("%d",&limit);

    printf("Bitte gebe dir %d Namen ein.\n",limit);
    for(int i = 0; i <= limit; i++){
        char name[20];
        fgets(name, sizeof(name), stdin);
        strcpy(name_list[i], name);
    }

    printf("Bitte gebe den gesuchten Buchstaben (Groß): ");
    scanf("%s",&search_char);

    for(int i = 0; i < lenght_of_list; i++){
        if(name_list[i][0]==search_char){
            printf("%s",name_list[i]);
        }
    }
    return 0;
}

