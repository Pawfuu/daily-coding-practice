#include <stdio.h>

int main() {
  int r, c;

  printf("Input the number of rows: ");
  scanf("%d", &r);
  printf("Input the number of columns: ");
  scanf("%d", &c);

  int arr[r][c];

  // Scan the user's inputted elements
  printf("Input the elements of the matrix or array: \n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("element [%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  // Arrange elements in matrix
  int total_size = r * c;
  for (int i = 0; i < total_size - 1; i++) {
    for (int j = 0; j < total_size - i - 1; j++) {

      int row1 = j / c;
      int col1 = j % c;

      int row2 = (j + 1) / c;
      int col2 = (j + 1) % c;

      // Compare
      if (arr[row1][col1] > arr[row2][col2]) {
        int temp = arr[row1][col1];
        arr[row1][col1] = arr[row2][col2];
        arr[row2][col2] = temp;
      }
    }
  }

  // Display the array
  printf("\nOutput:\n");
  for (int i = 0; i < r; i++) {
    printf("\n");
    for (int j = 0; j < c; j++) {
      printf("%d\t", arr[i][j]);
    }
  }
  printf("\n");
  return 0;
}
