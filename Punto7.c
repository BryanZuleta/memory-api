#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dato = malloc(100*sizeof(int));
    int *x = &dato[50];
    free(x);
    free(dato);
    return 0;
}
