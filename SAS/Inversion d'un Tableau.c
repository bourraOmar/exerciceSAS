#include<stdio.h>
int main(){
  int tab[5];
  int i, temp;
  printf("entre 5 nombre : ");
  for(i = 0; i < 5; i++)
    scanf("%d",&tab[i]);
  for(i = 0; i < 5/2; i++){
    temp = tab[i];
    tab[i] = tab[5-1-i];
    tab[5-1-i] = temp;
  }
  printf("Tableau inversé : ");
  for(i = 0; i < 5; i++)
    printf("%d ",tab[i]);
}