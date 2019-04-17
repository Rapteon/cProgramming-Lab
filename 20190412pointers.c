#include<stdio.h>

int main(){
  int *integerPointer, x = 50, i;
  char array[5] = {'s','u','r', 'a', 'j'};

  integerPointer = &x;
  printf("%p\n", integerPointer);
  printf("%d\n", *integerPointer);
  printf("%p\n", &integerPointer);
  printf("%p\n", array);

  printf("%c\n", *array);

  char *temp = array;
  temp = temp + 3;
  printf("%p\n", temp);
  printf("%c\n", *temp);
  printf("%p\n", array);

  for(int i = 0 ; i < 5; i++)
    printf("%c", *(array+i));
  printf("\n");
}
