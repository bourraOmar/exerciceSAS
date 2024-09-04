#include<stdio.h>
int main(){
  int tab[5];
  int i;
  printf("entre 5 nombre : \n");
  for(i = 0; i < 5; i++)
    scanf("%d",&tab[i]);
  int somme = 0;
  for(i = 0; i < 5; i++)
    somme = somme + tab[i];
  printf("la somme de votre nombres est : %d", somme);
  
}