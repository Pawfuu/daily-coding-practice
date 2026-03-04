#include <stdio.h>

int main() {

  // 2 - Array Reverse Display
  // int size;
  //
  // printf("Input the number of elements to store in the array: ");
  // scanf("%d", &size);
  // int elements[size];
  // printf("Input %d numbers of elements in the array: \n", size);
  // for(int i = 0; i < size;i++){
  //   printf("element - %d : ", i);
  //   scanf("%d", &elements[i]);
  // }
  // printf("Expected Output:\n");
  // printf("The values store into the array are :\n");
  // for(int i = 0; i < size; i++){
  //   printf("%d ", elements[i]);
  // }
  // printf("\nThe values store into the array in reverse are :\n");
  // for(int i = size-1; i >= 0; i--){
  //   printf("%d ", elements[i]);
  // }

  // 3 - Array Sum Calculation
  // int size;
  //
  // printf("Input the number of elements to store in the array: ");
  // scanf("%d", &size);
  // int elements[size];
  // printf("Input %d numbers of elements in the array: \n", size);
  // for(int i = 0; i < size;i++){
  //   printf("element - %d : ", i);
  //   scanf("%d", &elements[i]);
  // }
  // printf("Expected Output:\n");
  // int total = 0;
  // for(int i = 0; i < size; i++) {
  //   total += elements[i];
  // }
  // printf("Sum of all elements stored in the array is : %d\n", total);

  // Array Copy
  // int size;
  //
  // printf("Input the number of elements to store in the array: ");
  // scanf("%d", &size);
  // int arr1[size], arr2[size];
  //
  // printf("Input %d numbers of elements in the array: \n", size);
  // for(int i = 0; i < size;i++){
  //   printf("element - %d : ", i);
  //   scanf("%d", &arr1[i]);
  // }
  // printf("Expected Output:\n");
  // printf("The elements stored in the first array are :\n");
  // for(int i = 0; i < size; i++ ){
  //   printf("%d ", arr1[i]);
  // }
  // // copy
  //  printf("\nThe elements stored in the second array are :\n");
  // for(int i = 0; i < size; i++ ){
  //   arr2[i] = arr1[i];
  //   printf("%d ", arr2[i]);
  // }

  // 5 Count Duplicate elements
  // int size;
  // int count = 0;
  // printf("Input the number of elements to be stored in the array : ");
  // scanf("%d", &size);
  // int arr[size];
  // printf("Input %d elements in the array: \n", size);
  // for(int i = 0; i < size; i++){
  //   printf("element - %d : ", i);
  //   scanf("%d", &arr[i]);
  // }
  // // find duplicate
  // for(int i = 0; i < size; i++){
  //   // nested loop
  //   for(int j = i+1;  j < size; j++){
  //     if (arr[i] == arr[j]) {
  //       count++;
  //       break;
  //     }
  //   }
  // }
  // printf("Expected Output: \n");
  // printf("Total number of duplicate elements found in the array is : %d\n",
  // count);

  // 2D array Matrix
  // printf("Read a 2D array of size 3x3 and print the matrix : \n");
  // printf("---------------------------------------------------\n");
  // printf("Input elements in the matrix: \n");
  // int arr[3][3];
  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     printf("element - [%d],[%d] : ", i, j);
  //     scanf("%d", &arr[i][j]);
  //   }
  // }
  // // Display the matrix
  // for (int i = 0; i < 3; i++) {
  //   printf("\n");
  //   for (int j = 0; j < 3; j++) {
  //     printf("%d\t", arr[i][j]);
  //   }
  // }

  // Matrix Addition
  // int size;
  // printf("Input the size of the square matix (less than 5): ");
  // scanf("%d", &size);
  //
  // int arr1[size][size];
  // int arr2[size][size];
  // printf("Input elements in the first matrix : \n");
  // for (int i = 0; i < size; i++) {
  //   for (int j = 0; j < size; j++) {
  //     printf("element - [%d],[%d] : ", i, j);
  //     scanf("%d", &arr1[i][j]);
  //   }
  // }
  // printf("Input elements in the second matrix : \n");
  // for (int i = 0; i < size; i++) {
  //   for (int j = 0; j < size; j++) {
  //     printf("element - [%d],[%d] : ", i, j);
  //     scanf("%d", &arr2[i][j]);
  //   }
  // }
  // // Display
  // printf("Expected Output: \n");
  // printf("The First matrixx is :\n");
  // for (int i = 0; i < size; i++) {
  //   printf("\n");
  //   for (int j = 0; j < size; j++) {
  //     printf("%d\t", arr1[i][j]);
  //   }
  // }
  // printf("\nThe Second matrixx is :\n");
  // for (int i = 0; i < size; i++) {
  //   printf("\n");
  //   for (int j = 0; j < size; j++) {
  //     printf("%d\t", arr2[i][j]);
  //   }
  // }
  // // Addition
  // int sumArr[size][size];
  // printf("\nThe Addition of two matix is : \n");
  // for (int i = 0; i < size; i++) {
  //   for (int j = 0; j < size; j++) {
  //     sumArr[i][j] = arr1[i][j] + arr2[i][j];
  //   }
  // }
  // printf("\nThe Addition of two matrix is :");
  // for (int i = 0; i < size; i++) {
  //   printf("\n");
  //   for (int j = 0; j < size; j++) {
  //     printf("%d\t", sumArr[i][j]);
  //   }
  // }
  //
  return 0;
}
