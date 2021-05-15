#include <stdlib.h>
#include "stack.h"

int main(){
    init();
    push(21);
    push(12);
    printStack();
    pop();
    printStack();
}