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

  int nums[5];

  printf("Enter the elements of the array: ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &nums[i]);
  }

  int largest = largestNum(nums);
  printf("%d is the largest element", largest);
  return 0;
}
