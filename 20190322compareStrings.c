#include<stdio.h>

int main(){
  char stringOne[32], string2[32];

  printf("Enter the first string:");
  scanf("%s", stringOne);
  printf("Enter the seocnd string:");
  scanf("%s", string2);

  for(int i = 0; stringOne[i]!='\0'; i++){
    char ch1 = stringOne[i];
    char ch2 = string2[i];

    if(ch1 == ch2)
      continue;
    else
      printf("The two strings are different.\n");
      break;
  }
}
