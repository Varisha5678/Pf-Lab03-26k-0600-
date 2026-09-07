#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter a single character: ");
    ch = getchar(); 

    printf("You entered: ");
    putchar(ch);         
    putchar('\n');        

    return 0;
}
