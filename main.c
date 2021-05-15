#include <stdio.h>
#include "mylib.h"
#include <stdlib.h>

int main(){
    int *q = staticInt();
    *q = 12;
    printf("%d\n", *q);
    free(q);
}