#include<stdio.h>

int main(){
  int r1, c1, r2, c2;

  printf("Enter the number of rows of matrix1:");
  scanf("%d", &r1);
  printf("Enter the number of columns of matrix1:");
  scanf("%d", &c1);
  printf("Enter the number of rows of matrix2:");
  scanf("%d",&r2);
  printf("Enter the number of columns of matrix2:");
  scanf("%d", &c2);

  int matrix1[r1][c1], matrix2[r2][c2], matrix3[r1][c2];

  printf("Enter the elements of matrix1:\n");
  for(int i = 0; i<r1; i++){
    for(int j = 0; j<c1; j++)
      scanf("%d", &matrix1[i][j]);
  }

  printf("Enter the elements of matrix2:\n");
  for(int i = 0; i<r2; i++){
    for(int j = 0; j<c2; j++)
      scanf("%d", &matrix2[i][j]);
  }
  /*for(int rowForFirst = 0; rowForFirst < r1; rowForFirst++)
    for(int colForFirst = 0; colForFirst < c2; colForFirst++){
      int sum = 0;
      for(int rowSecond = 0; rowSecond < r2; rowSecond++){
        sum = sum + matrix1[rowForFirst][colForFirst]*matrix2[rowForFirst][rowSecond];
        matrix3[rowForFirst][rowSecond];
      }h
    }
*/

for(int i = 0; i < 3; i++){
  for(int j = 0; j < 3; j++){
    int sum = 0;
    for(int k = 0; k < 3; k++)
      sum = sum + matrix1[i][j]*matrix2[k][i];
      matrix3[i][j] = sum;
  }
}
  for(int m = 0; m < r1; m++)
    for(int n = 0; n < c2; n++){
      printf("%3d\n",matrix3[m][n]);
      if(n == c2)
        printf("\n");
    }
}
