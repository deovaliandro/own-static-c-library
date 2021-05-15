#include <stdio.h>
#include "stack.h"

int isEmpty(){
    return (top<0) ? 1 : 0;
}

int isFull(){
    return (top==n-1) ? 1 : 0;
}

void init(){
    top = -1;
}

void push(int x){
    if(isFull()==0){
        top++;
        s[top] = x;
    } else {
        printf("Stack full\n");
    }
}

void pop(){
    if(isEmpty()==0){
        x = s[top];
        top--;
    } else {
        printf("Stack empty\n");
    }
}

void printStack() {
    if (top>=0){
        for(int i=0; i<=top; i++){
            printf("%d = %d\n", i, s[i]);
        }
    } else {
        printf("Stack empty\n");
    }
}