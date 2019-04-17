#include<stdio.h>
#include<stdlib.h>
int main(){
  char string[32], substr[32];
  int length1 = 0, length2 = 0, stringCounter = 0, subCounter, location = -1;

  printf("Enter a first string: ");
  scanf("%s", string);
  printf("Enter the string to for substring: ");
  scanf("%s", substr);

  //Finding the lengths of the two strings.
  for(int i = 0; string[i] != '\0'; i++)
    length1++;
  for(int i = 0; substr[i]!='\0'; i++)
    length2++;

    //printf("%d %d\n", length1, length2);

  if(length2 > length1){                    //because if the substring is longer than the string, there is no way the substring can be present in the string
        printf("Not found!\n");
        exit(0);
  }else{
    do{
        while(string[stringCounter]!=substr[0]){
          stringCounter++;
        }
        location = stringCounter;
          for(subCounter = 0; subCounter< length2; subCounter++){
            if(string[stringCounter] == substr[subCounter]){
              stringCounter++;
              continue;
            }
            else
              break;
          }
        if(subCounter == length2)
          printf("Present at location %d\n", location);
        else{
          subCounter = 0;
          location   = -1;
        }
    }
    while(stringCounter<length1);
}
/*if(stringCounter>length1)
  printf("Not found.\n");*/
  printf("%d")
}
