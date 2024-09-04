#include <stdio.h>
int main() {
    int tab[5];
    int i;
    printf("entre 5 nombre:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d",&tab[i]);
    }
    printf("elements pairs dans le tableau:\n");
    for (i = 0; i < 5; i++) {
        if (tab[i] % 2 != 0) {
            printf("%d ",tab[i]);
        }
    }   
}