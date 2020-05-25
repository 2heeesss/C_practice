#include <stdio.h>
#define MAX 1000
int main(void) {
    char msg[MAX];
    int i;
    
    printf("Enter a message : ");
    for (i = 0; i < MAX; i++){
        msg[i] = getchar();
        if(msg[i] == '\n')
            break;
    }
    
    printf("Reversal is : ");
    for (i--; i >= 0; i--)
        putchar(msg[i]);
    putchar('\n');
    
    return 0;
}
