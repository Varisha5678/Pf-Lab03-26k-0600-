
#include <stdio.h>
#include <stdbool.h>   // needed for bool, true, false in C

int main(void) {
    int    i = 900;
    float  f = 3.89f;
    double d = 7.89898989;
    char   c = 'A';
    bool   b = true;

    printf("int:    value = %d, size = %zu bytes\n", i, sizeof(i));
    printf("float:  value = %f, size = %zu bytes\n", f, sizeof(f));
    printf("double: value = %lf, size = %zu bytes\n", d, sizeof(d));
    printf("char:   value = %c, size = %zu bytes\n", c, sizeof(c));
    printf("bool:   value = %d, size = %zu bytes\n", b, sizeof(b));

    return 0;
}
