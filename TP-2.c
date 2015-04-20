/*
* Ejercicio 1.10
* Fabiana Maria Anahi Ramirez
* 19/04/2015
*/

#include <stdio.h>

int main(void){
    int c;
    while((c = getchar()) != EOF){
        if (c == '\t'){
            putchar('\\');
            putchar('\\t');
        }
        else if (c == '\b'){
            putchar('\\');
            putchar('\\b');
        }
         else if (c == '\\'){
            putchar('\\');
            putchar('\\');
        }
        else{
            putchar(c);
        }
    }
}

