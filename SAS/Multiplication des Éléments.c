#include<stdio.h>
int main(){
  int tab[5];
  int i, F;
  printf("entre 5 nombre : ");
  for(i = 0; i < 5; i++)
    scanf("%d", &tab[i]);
  printf("donnee le facteur de multiplication : ");
  scanf("%d",&F);
  for(i = 0; i < 5; i++)
    printf(" %d * %d = %d\n", F, tab[i], F*tab[i]);
}