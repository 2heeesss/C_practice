#include <stdio.h>

#define MAX 1000

int main(void) {
    
    char msg[MAX], *p;

    printf("Enter a message : ");

    for(p = msg; p < msg + MAX; p++){
        *p = getchar();
        if (*p == '\n')
            break;
    }
    
    printf("Reversal is : ");

    for (p--; p >= msg; p--){
        putchar(*p);
    }
    printf("\n");

    return 0;
}
