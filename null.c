#include <stdio.h>
#define NULL 0
int main(){
    int integer = 5;
    int *pointer = &integer;
    pointer = NULL;
    *pointer = 3;
    return 0;
}