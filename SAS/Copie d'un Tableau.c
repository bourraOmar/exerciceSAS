#include<stdio.h>
int main(){
  int tab1[5],tab2[5];
  int i, j;
  printf("entre 5 nombre : ");
  for(i = 0; i < 5; i++)
    scanf("%d",&tab1[i]);
  for(i = 0; i < 5; i++){
      tab2[j] = tab1[i];
      j++;
  }
  for(i = 0; i < 5; i++)
    printf("%d ",tab1[i]);
  printf("\n");
  for(j = 0; j < 5; j++)
    printf("%d ",tab2[j]);
}