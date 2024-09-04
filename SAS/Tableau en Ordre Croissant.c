#include<stdio.h>
int main(){
  int tab[5];
  int i, j, min, temp;
  printf("entre 5 nombre : ");
  for(i = 0; i < 5; i++)
    scanf("%d",&tab[i]);
  for(i = 0; i < 5-1; i++){
    for(j = i+1; j < 5; j++)
      if(tab[i]<tab[i+1]){
        temp = tab[i];
        tab[i] = tab[i+1];
        tab[i+1] = temp;
      }
  }
  printf("la resultate : ");
  for(i = 0; i < 5; i++)
    printf("%d ",tab[i]);
}