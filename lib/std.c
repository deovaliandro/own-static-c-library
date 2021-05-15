/*
    Pustaka kecil yang ditulis untuk tugas kecil
    Deo Valiandro. M
    git by gpg
*/

#include <stdio.h>
#include <stdlib.h>
#include "std.h"

void swap(int *p, int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;

    printf("p = %d, q = %d\n", *p, *q);
}

int toLowerCase(char *c){
    return (*c >= 'A' && *c < 'Z') ? *c + 'a' - 'A' : *c;
}

int* staticInt(){
    int *p;
    p = (int*) malloc(sizeof(int)); 
    return p;
}