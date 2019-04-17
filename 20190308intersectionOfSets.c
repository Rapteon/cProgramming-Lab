//Program to perform intersection of sets

#include<stdio.h>
#include<stdlib.h>
int main(){
  int m, n, counter3 = 0;

  printf("Enter the size of array1.\n");
  scanf("%d", &m);
  printf("Enter the size of array2.\n");
  scanf("%d", &n);

  int array1[m], array2[n], array3[m+n];

  printf("Enter the elements of array1\n");
  for(int i =0; i<m; i++)
    scanf("%d", &array1[i]);

  printf("Enter the elements of array2\n");
  for(int i =0; i<n; i++)
    scanf("%d", &array2[i]);

  int element, atLeastOne = 1;
  for(int j = 0; j<n; j++){
    element = array2[j];
    int foundState = 0;
    for(int k = 0; k<m; k++){
      if(array1[k] == element){
        foundState = 1;
        atLeastOne +=1;
        break;
      }
    }
    if(foundState == 1){
      array3[counter3] = element;
      counter3++;
    }
  }
  if(atLeastOne==1){
    printf("The intersection of the two sets is phi.\n");
    exit(1);
  }
  else{
    printf("The elements of the intersection of the two sets are as follows:\n");
    //Printing Intersection of sets:
    for(int l = 0; l<counter3; l++)
      printf("%d\n", array3[l]);
  }



}
