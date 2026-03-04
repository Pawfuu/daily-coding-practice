#include <stdio.h>

void printArr(int numbers[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", numbers[i]);
  }
}

int largestNum(int nums[]) {
  int largest = nums[0];
  for (int i = 1; i < 5; i++) {
    if (nums[i] > largest) {
      largest = nums[i];
    }
  }
  return largest;
}

int main() {
  // exercise 1

  // int nums[5];
  //
  // printf("Enter the elements of the array: ");
  // for (int i = 0; i < 5; i++) {
  //   scanf("%d", &nums[i]);
  // }
  //
  // int largest = largestNum(nums);
  // printf("%d is the largest element", largest);
  // return 0;
  //
  int original[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int transposed[3][3];

  // Transpose logic
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
      transposed[col][row] = original[row][col];
    }
  }

  printf("Transposed Matrix:\n");
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
      printf("%d ", transposed[row][col]);
    }
    printf("\n");
  }
  return 0;
}
