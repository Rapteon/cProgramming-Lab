#include<stdio.h>
#include<stdlib.h>
int main(){
  int r,c ;

  printf("Enter the number of rows in each matrix:");
  scanf("%d", &r);
  printf("Enter the number of columns in each matrix:");
  scanf("%d", &c);

  int array1[r][c], array2[r][c], sum[r][c];

  int i, j;
  printf("Enter elements of array1:\n\n");
  fflush(stdin);
  for(i = 0; i<r; i++){
    for(j = 0; j<c; j++)
      scanf("%d", &array1[i][j]);
  }
  printf("Enter elements of array2:\n");
  for(i=0; i<r; i++){
    for(j=0; j<c; j++)
      scanf("%d", &array2[i][j]);
  }

  int m,n;
  for(m = 0; m<r; m++){
    for(n = 0; n < c; n++)
      sum[m][n] = array1[m][n]+array2[m][n];
  }

  printf("The sum ofthe arrays array1 and array2 is: \n");

  for(int row = 0; row<r; row++){
    for(int column = 0; column<c; column++)
      printf("%d\n", sum[row][column]);
  }
}
