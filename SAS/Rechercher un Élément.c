#include <stdio.h>
int main() {
    int tab[5];
    int i, nb, count = 0;
    printf("entre 5 nombre:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d",&tab[i]);
    }
    printf("entre l'élément à rechercher: ");
    scanf("%d", &nb);
    for (i = 0; i < 5; i++) {
        if (tab[i] == nb) {
            count = 1;
            break;
        }
    }
    if (count) {
        printf("votre élément %d est présent dans le tableau.\n", nb);
    } else {
        printf("votre élément %d n'est pas présent dans le tableau.\n", nb);
    }
}
