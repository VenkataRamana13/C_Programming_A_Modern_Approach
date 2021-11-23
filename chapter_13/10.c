/*#include <stdio.h>

int main(void) {

    char c, initial;

    printf("Enter a first and last name: ");
    scanf(" %c", &initial);

    while ((c = getchar()) != ' ')
        ;

    while ((c = getchar()) == ' ')
        ;

    do {
        putchar(c);
    } while ((c = getchar()) != '\n' && c != ' ');

    printf(", %c.\n", initial);

    return 0;
}*/

#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 30
void reverse_name(char *name);

int main(){
    char name[NAME_LENGTH];
    printf("Enter first and last name: ");
    gets(name);
    reverse_name(name);
    printf("\n");
}

void reverse_name(char *name){
    char *p;
    p = name;
    while(*p == ' '){
        p++;}
    char initial = *p;
    while(*p++ != ' ')
        ;
    while(*p == ' ')
        p++;
    while(*p != ' ' && *p != '\0'){
        putchar(*p);
        p++;}
    printf(", %c.", initial);
}


