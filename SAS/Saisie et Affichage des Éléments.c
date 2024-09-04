#include<stdio.h>
int main(){
  int tab[5];
  int i;
  printf("entre 5 nombre : \n");
  for(i = 0; i < 5; i++)
    scanf("%d",&tab[i]);
  printf("votre 5 nombre vous entre sont: \n");
  for(i = 0; i < 5; i++)
    printf("%d\n",tab[i]);
}