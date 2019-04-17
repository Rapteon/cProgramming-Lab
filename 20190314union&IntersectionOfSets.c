#include<stdio.h>
#include<stdlib.h>
int main(){
  int m, n, counter3, foundState=0, choice;

  printf("Enter the size of array1: ");
  scanf("%d", &m);
  printf("Enter the size of array2: ");
  scanf("%d", &n);

  int array1[m], array2[n], array3[m+n];

  printf("Select the operation to perform:\n");
  printf("1 : UNION\n");
  printf("2 : INTERSECTION\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  printf("Enter elements of array1:\n");
  for(int counter1 = 0; counter1<m; counter1++)
    scanf("%d", &array1[counter1]);

  printf("Enter the elements of array2:\n");
  for(int counter2 = 0; counter2<n; counter2++)
    scanf("%d", &array2[counter2]);

  if(choice == 1){
    int k;
    for(k=0; k<m; k++)
      array3[k] = array1[k];
    int element;
    for(int counter2 = 0; counter2<n; counter2++){
      element = array2[counter2];
      foundState = 0;
      for(int counter1 = 0; counter1<m; counter1++){
        if(array1[counter1] == element){
          foundState = 1;
          break;
        }
      }
      if(foundState == 0){
        array3[k] = element;
        k++;
      }
    }
    printf("------%d-------\n", k);
    for(int l = 0; l < k;l++){
        printf("%d\n", array3[l]);
    }
  }
  else if(choice == 2){
    int atLeastOne = 1, element;
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
}
