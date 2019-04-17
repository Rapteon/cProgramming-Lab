#include<stdio.h>

int main(){
  int array[10] = {32,13,42,34,65,66,75,99,80,23};
  int length = 10;

  printf("The elements of the given array are: \n");
  for(int count = 0; count < length; count++)
    printf("%3d", array[count]);
    printf("\n");

  for(int i = 0;i < length; i++){
    for(int j = 0; j < length - 1 - i; j++){
      if(array[j]>array[j+1]){
        char temp = array[j];
        if(array[j+1]=='\0')
          break;
        else{
        array[j] = array[j+1];
        array[j+1] = temp;
        }
      }
    }
  }

  printf("The sorted array is:\n");
  for(int k = 0; k < length; k++)
    printf("%3d", array[k]);

  printf("\n");
}
