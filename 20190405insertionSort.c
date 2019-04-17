#include<stdio.h>

int main(){
  int array[10] = {10, 21, 78, 67, 56, 22, 11, 89, 97, 63};
  int temp, j;
  int length = 10;

  printf("The given array is:\n");
  for(int k = 0; k < length; k++)
    printf("%3d", array[k]);
  printf("\n");

  for(int i = 0; i < (length); i++){
    temp = array[i];
    j = i - 1;
    while(j>=0 && array[j]>temp){
      array[j+1] = array[j];
      j--;
    }
    array[j+1] = temp;
  }

  printf("The sorted array is:\n");
  for(int l = 0; l < length; l++)
    printf("%3d", array[l]);
  printf("\n");
}
