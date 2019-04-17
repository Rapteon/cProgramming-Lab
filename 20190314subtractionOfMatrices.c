#include<stdio.h>

int main(){
  int rows, columns;

  printf("Enter the number of rows in each matrix:");
  scanf("%d", &rows);
  printf("Enter the number of columns in each matrix:");
  scanf("%d", &columns);

  int array1[rows][columns], array2[rows][columns], difference[rows][columns];

  printf("Enter the elements of matrix1: \n");
  for(int i =0; i < rows;i++){
    for(int j = 0; j<columns; j++)
      scanf("%d", &array1[i][j]);
  }

  printf("Enter the elements of matrix2:\n");
  for(int i =0; i<rows; i++){
      for(int j  = 0; j<columns; j++)
        scanf("%d", &array2[i][j]);
  }

  //Difference of the two arrays
  for(int i = 0 ; i<rows; i++){
    for(int j = 0; j<columns; j++)
      difference[i][j] = array1[i][j] - array2[i][j];
  }

  printf("The difference of the two matrices is :\n");
  int m, n;
  for(m =0; m<rows; m++){
    for(n = 0; n<columns; n++){
      printf("%5d", difference[m][n]);
    }
    if(n >= columns)
      printf("\n");
  }
}
