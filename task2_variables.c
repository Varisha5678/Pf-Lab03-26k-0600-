#include <stdio.h>
#include <stdbool.h>   // needed for bool, true, false in C

int main(void) {
    int    i = 42;
    float  f = 3.14f;
    double d = 3.14159265358979;
    char   c = 'A';
    bool   b = true;

    printf("int:    value = %d, size = %zu bytes\n", i, sizeof(i));
    printf("float:  value = %f, size = %zu bytes\n", f, sizeof(f));
    printf("double: value = %lf, size = %zu bytes\n", d, sizeof(d));
    printf("char:   value = %c, size = %zu bytes\n", c, sizeof(c));
    printf("bool:   value = %d, size = %zu bytes\n", b, sizeof(b));

    return 0;
}
