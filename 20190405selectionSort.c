#include<stdio.h>

int main(){
  int array[] = {1,10,3,7,5};
  int length = 5;
  int minVal,minIndex,foundIndex, temp;

  printf("The unsorted array is as follows:\n");
  for(int k = 0; k < length; k++)
    printf("%3d", array[k]);
  printf("\n");

  for(minIndex = 0; minIndex < length-1; minIndex++){
    for(int i = (minIndex+1); i <= length; i++){
      minVal = array[minIndex];
      if(minVal > array[i]){
        temp = array[i];
        foundIndex = i;
      }

      if(i == length){
        array[foundIndex] = array[minIndex];
        array[minIndex] = temp;
        printf("%d\n", temp);
      }
    }
  }

  printf("The sorted array is:\n");
  for(int j = 0; j< length; j++)
    printf("%3d", array[j]);
    printf("\n");
}
