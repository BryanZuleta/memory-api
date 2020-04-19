#include<malloc.h>
#include<stdio.h>

int main(){
    int *dato = malloc(100*sizeof(int));
    dato[1] = 8;
    free(dato);
    printf("%d\n", dato[1]);
    return 0;
}
