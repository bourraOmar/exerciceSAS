#include<stdio.h>
int main(){
  int tab[5];
  int i, max;
  printf("entre 5 nombre : ");
  for(i = 0; i < 5; i++)
    scanf("%d",&tab[i]);
  max=tab[0];
  for(i = 0; i < 5; i++){
    if(tab[i]<tab[i+1]){
      max = tab[i+1];
    }
  }
  printf("le max : %d", max);
}