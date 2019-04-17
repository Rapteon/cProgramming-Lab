#include<stdio.h>

int main(){
  int n, m, foundState;

  printf("Enter the size of array A:");
  scanf("%d", &n);

  printf("Enter the size of array B:");
  scanf("%d", &m);

  int A[n], B[m], C[n+m];

  printf("Enter the elements of the array A: \n");
  for(int i = 0; i<n; i++)
    scanf("%d", &A[i]);


  printf("Enter the elements of array B:\n");
  for(int j = 0; j<m; j++)
    scanf("%d", &B[j]);
int k;
//Copying elements of A to C.
  for(k = 0; k<n; k++)
    C[k] = A[k];

//printf("-------------------\n");

  /*for(int counterC = 0; counterC < n ; counterC++){
    printf("%d\n", C[counterC]);
  }
  */
  int element;
  for(int counterB = 0; counterB<m; counterB++){
    element = B[counterB];
    foundState = 0;
    for(int counterA = 0; counterA<n; counterA++){
      if(A[counterA]==element){
        foundState =1;
        break;
      }
    }
    if(foundState==0)
        {
          C[k] = element;
          k++;
        }

  }

  /*
  int found = 1;
  for(int j = 0; j < m ; j++){

    int item = B[j];
    for(int k = 0; k<n; k++){
      if(A[k] == item){
        found = 0;
        break;
      }
    }
    if(found == 1){
      C[j] = item;
    }
  }*/

printf("--------------\n");
for(int l = 0; l < k;l++){
    printf("%d\n", C[l]);
}


}
