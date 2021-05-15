// simple implementation of static int

#include <stdio.h>
#include <stdlib.h>
#include "lib/std.h"
#include "lib/stack.h"

int main(){
    int *q = staticInt();
    *q = 12;
    printf("%d\n", *q);
    free(q);

    init();
    push(21);
    push(12);
    printStack();
    pop();
    printStack();
}