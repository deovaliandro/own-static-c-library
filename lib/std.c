/*
    Pustaka kecil yang ditulis untuk tugas kecil
    Deo Valiandro. M
    git by gpg
*/

#include <stdio.h>
#include <stdlib.h>
#include "std.h"

void swapInt(int *p, int *q){
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

int modpow(int a, int b, int c) {
    int dummy = a;

    for (int i = 0; i < b-1; i++) {
        dummy = (dummy * a) % c;
    }

    return dummy;
}

int isRelativePrime(int a, int b) {
    int dummy;

    while (b != 0) {
        dummy = a % b;
        a = b;
        b = dummy;
    }

    return a;    
}

int isPrimitiveRoot(int prime, int root) {
    int h[prime-2];
    int hprime = prime;

    for(int i=0; i<prime; i++) {
        h[i] = modpow(root, i+1, prime);
        // std::cout << h[i] << std::endl;
    }
    
    int kampret = 1;

    for(int i=0; i<sizeof(h)/sizeof(h[0]) - 1; i++) {
        for (int j=kampret; j<sizeof(h)/sizeof(h[0]); j++) {
            if (h[i] == h[j]) {
                printf("Not primite root\n");
                return 0;
            }
        }
        
        if(isRelativePrime(prime, h[i]) != 1) {
            return 0;
        }

        kampret++;
    }

    return 1;
}