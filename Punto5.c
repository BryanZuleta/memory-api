#include<malloc.h>
#include<stdio.h>

int main(){
    int *datos = malloc(100*sizeof(int));
    datos[100] = 0;
    free(datos);
    printf("%d\n", datos[1]);
    return 0;
}
