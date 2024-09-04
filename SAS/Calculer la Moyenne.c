#include <stdio.h>
int main() {
    int tab[5];
    int i, moyenne, somme = 0;
    printf("entre 5 nombre");
    for (i = 0; i < 5; i++) {
        scanf("%d",&tab[i]);
        somme = somme + tab[i];
    }
    moyenne = somme / 5;
    printf("La moyenne est: %d", moyenne);
}
