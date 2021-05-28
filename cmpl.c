#include <stdio.h>
#include <stdlib.h>
#include "lib/std.h"
#include "lib/stack.h"

int main() {
    init();
    char in[30];
    scanf("%s", in);
    int i=0, k=1;

    while (in[i] != '\0'){
        if(in[i] == '('){
            push(in[i]);
            k++;
        }else if(in[i] == ')'){
            if (isEmpty() == 1){
                k++;
                break;
            } else {
                pop();
                k--;
            }
            
        }
        i++;
    }

    if(k == 1){
        printf("Can accept\n");
    }else{
        printf("Can't accept\n");
    }
    
}