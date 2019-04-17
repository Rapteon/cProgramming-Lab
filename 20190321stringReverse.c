#include<stdio.h>

int main(){
  char stringOne[32], stringReversed[32];

  printf("Enter the string to reverse:");
  scanf("%s", stringOne);

  int length = 0, reverseCounter = 0;
  for(int i = 0; stringOne[i]!='\0'; i++)
    length += 1;
  int compareParameter = length;                      //Since the value of the 'length' changes as the loop runs.
  while(length >= 0){                                 //Using the length of the first string as counter.
    stringReversed[reverseCounter] = stringOne[length - 1];
    length --;
    reverseCounter ++;
  }

  printf("The reversed string is %s\n", stringReversed);

  for(int compare = 0; compare <= compareParameter; compare++){
    char ch1 = stringOne[compare];
    char ch2 = stringReversed[compare];
    if(ch1 == '\0')
      printf("The given string is a palindrome.\n");  //It means the counter has reached the end of stringOne.
    if(ch1 == ch2)
      continue;                                       //If the characters at the same position are the same, then continue.
    else
      printf("The given string is not a palindrome afer considering the case.\n");
      break;
  }
}
