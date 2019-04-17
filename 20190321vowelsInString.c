#include<stdio.h>

int main(){
  int vowels = 0;
  char string[32];

  printf("Enter the string:");
  scanf("%s", string);

  int length = 0;

  for(int count = 0; string[count]!='\0'; count++)
    length +=1;

  printf("The length of the string is %d\n", length);

  for(int count = 0; string[count]!='\0'; count++)
      switch(string[count]){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
                  vowels+=1;
                  break;
      }


  printf("The number of vowels is %d.\n", vowels);
}
