#include<stdio.h>

int main(){
  char stringOne[32], string2[32];

  printf("Enter the first string:");
  scanf("%s", stringOne);
  printf("Enter the second string:");
  scanf("%s", string2);

  int length1 = 0, length2 = 0;

  for(int i = 0; stringOne[i] != '\0'; i++)
    length1++;
  for(int j = 0; string2[j]!= '\0'; j++)
    length2++;

  if(length2>length1)
    printf("The second string %s is longer.\n", string2);
  else if(length1 > length2)
    printf("The first string %s is longer.\n", stringOne);
  else
    printf("The two strings have the same length.\n");
}
