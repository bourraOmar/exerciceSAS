#include<stdio.h>
int main(){
  int tab[5];
  int i, min;
  printf("entre 5 nombre : ");
  for(i = 0; i < 5; i++)
    scanf("%d",&tab[i]);
  min=tab[0];
  for(i = 0; i < 5; i++){
    if(tab[i]>tab[i+1]){
      min = tab[i+1];
    }
  }
  printf("le min : %d", min);
}