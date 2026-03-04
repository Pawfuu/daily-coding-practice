// Exercise 1
// #include <stdio.h>
//
// int main() {
//
//   int r, c;
//
//   printf("Input the number of rows: ");
//   scanf("%d", &r);
//   printf("Input the number of columns: ");
//   scanf("%d", &c);
//
//   int arr[r][c];
//
//   // Scan the user's inputted elements
//   printf("Input the elements of the matrix or array: \n");
//   for (int i = 0; i < r; i++) {
//     for (int j = 0; j < c; j++) {
//       printf("element [%d][%d]: ", i, j);
//       scanf("%d", &arr[i][j]);
//     }
//   }
//
//   // Find the largest element
//   int max = arr[0][0];
//   for (int i = 0; i < r; i++) {
//     for (int j = 0; j < c; j++) {
//       if (max < arr[i][j]) {
//         max = arr[i][j];
//       }
//     }
//   }
//
//   // Display the array
//   printf("\nOutput:\n");
//   for (int i = 0; i < r; i++) {
//     printf("\n");
//     for (int j = 0; j < c; j++) {
//       printf("%d\t", arr[i][j]);
//     }
//   }
//   printf("\nThe highest element: %d\n", max);
//   return 0;
// }

// Exercise 2
// #include <stdig.h>
//
// int main() {
//   int r, c;
//
//   printf("Input the number of rows: ");
//   scanf("%d", &r);
//   printf("Input the number of columns: ");
//   scanf("%d", &c);
//
//   int arr[r][c];
//
//   // Scan the user's inputted elements
//   printf("Input the elements of the matrix or array: \n");
//   for (int i = 0; i < r; i++) {
//     for (int j = 0; j < c; j++) {
//       printf("element [%d][%d]: ", i, j);
//       scanf("%d", &arr[i][j]);
//     }
//   }
//
//   // Arrange elements in matrix
//   int total_size = r * c;
//   for (int i = 0; i < total_size - 1; i++) {
//     for (int j = 0; j < total_size - i - 1; j++) {
//
//       int row1 = j / c; // returns whole value
//       int col1 = j % c; // returns the decimal
//
//       int row2 = (j + 1) / c;
//       int col2 = (j + 1) % c;
//
//       // Compare
//       if (arr[row1][col1] > arr[row2][col2]) {
//         int temp = arr[row1][col1];
//         arr[row1][col1] = arr[row2][col2];
//         arr[row2][col2] = temp;
//       }
//     }
//   }
//
//   // Display the array
//   printf("\nOutput:\n");
//   for (int i = 0; i < r; i++) {
//     printf("\n");
//     for (int j = 0; j < c; j++) {
//       printf("%d\t", arr[i][j]);
//     }
//   }
//   printf("\n");
//   return 0;
// }

// Exercise 3
#include <stdio.h>
int main() {

  int r1, c1, r2, c2;
  printf("Input the rows in the 1st Array: ");
  scanf("%d", &r1);
  printf("Input the columns in the 1st Array: ");
  scanf("%d", &c1);
  printf("Input the rows in the 2nd Array: ");
  scanf("%d", &r2);
  printf("Input the columns in the 2nd Array: ");
  scanf("%d", &c2);

  if (r1 != r2 || c1 != c2) {
    printf("Error! The number of rows and columns for both arrays should be "
           "equal! ");
  } else {
    int arr1[r1][c1];
    int arr2[r2][c2];

    // Scan the user's inputted elements
    printf("\nInput the elements for the 1st array: \n");
    for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c1; j++) {
        printf("element [%d][%d]: ", i, j);
        scanf("%d", &arr1[i][j]);
      }
    }
    printf("Input the elements for the 2nd array: \n");
    for (int i = 0; i < r2; i++) {
      for (int j = 0; j < c2; j++) {
        printf("element [%d][%d]: ", i, j);
        scanf("%d", &arr2[i][j]);
      }
    }

    // Display the array
    printf("\nOrignal Array:\n");
    printf("1st Array:");
    for (int i = 0; i < r1; i++) {
      printf("\n");
      for (int j = 0; j < c1; j++) {
        printf("%d\t", arr1[i][j]);
      }
    }

    printf("\n\n2nd Array:");
    for (int i = 0; i < r2; i++) {
      printf("\n");
      for (int j = 0; j < c2; j++) {
        printf("%d\t", arr2[i][j]);
      }
    }

    // Swap arrays
    for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c1; j++) {
        int temp = arr1[i][j];
        arr1[i][j] = arr2[i][j];
        arr2[i][j] = temp;
      }
    }
    printf("\n\nSwapped Array:\n");
    printf("1st Array:");
    for (int i = 0; i < r1; i++) {
      printf("\n");
      for (int j = 0; j < c1; j++) {
        printf("%d\t", arr1[i][j]);
      }
    }

    printf("\n\n2nd Array:");
    for (int i = 0; i < r2; i++) {
      printf("\n");
      for (int j = 0; j < c2; j++) {
        printf("%d\t", arr2[i][j]);
      }
    }
  }

  return 0;
}
