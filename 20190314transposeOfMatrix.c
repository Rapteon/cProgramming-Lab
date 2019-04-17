#include<stdio.h>

int main(){
  int rows, columns;

  printf("Enter the number of rows in the array:");
  scanf("%d", &rows);
  printf("Enter the number of columns in the array:");
  scanf("%d", &columns);

  int matrix[rows][columns], transpose[columns][rows];
  printf("Enter the elements of the matrix:\n");
  for(int i = 0; i< rows; i++){
    for(int j =0; j<columns ; j++)
      scanf("%d", &matrix[i][j]);
  }

  for(int m =0; m<rows; m++){
    for(int n =0; n<columns; n++)
      transpose[n][m] = matrix[m][n];
  }

  printf("The transpose of the given matrix is as follows:\n");
  int rowCount, columnCount;
  for(rowCount = 0; rowCount< columns; rowCount++){
    for(columnCount = 0; columnCount<rows; columnCount++)
      printf("%5d", transpose[rowCount][columnCount]);
    if(columnCount == rows)
      printf("\n");
  }
}
