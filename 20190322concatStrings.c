#include<stdio.h>
#include<stdlib.h>

int main(){
  char stringOne[64], string2[32], choice;
  int lengthOfOne=0;

  printf("Enter the first string:");
  scanf("%s", stringOne);
  printf("Enter the second string:");
  scanf("%s", string2);

  printf("The second string will be joined to the end of the first one.");
  printf("Do you want to continue?Y/n");
  fflush(stdin);
  scanf(" %c", &choice);


    int count;                                          //Finding the lengths of the two strings.
    for(count = 0; stringOne[count]!='\0'; count++)
      lengthOfOne+=1;                                   //             ||same||

    int length2 = 0;                                    //Finding the lengths of the two strings.
    for(int k = 0; string2[k]!='\0'; k++)
      length2+=1;

    for(int i =0; i <= (length2-1); i++){               //Try printing element at position of LengthOfOne for stringOne. It comes empty.
      stringOne[lengthOfOne] = string2[i];              //Ands used length2-1 for the same reason since position length2 of the second string holds '\0'
      lengthOfOne++;
    }

    printf("The concatenated string is %s.\n", stringOne);


}
