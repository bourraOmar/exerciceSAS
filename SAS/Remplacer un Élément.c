#include <stdio.h>
int main() {
    int tab[5];
    int i, nb1, nb2;
    printf("entre 5 nombre:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d",&tab[i]);
    }
    printf("entrez la valeur a remplacer: ");
    scanf("%d", &nb1);
    printf("entrez la nouvelle valeur: ");
    scanf("%d", &nb2);
    for (i = 0; i < 5; i++) {
        if (tab[i] == nb1) {
            tab[i] = nb2;
        }
    }
    printf("apres le remplacement:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ",tab[i]);
    }
}
