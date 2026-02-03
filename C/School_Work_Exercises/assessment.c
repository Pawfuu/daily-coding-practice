#include <stdio.h>

int main() {
  int arr[5];
  int evenArr[5];
  printf("Enter the numbers: ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }
  int count = 0;
  // find even numbers
  for (int i = 0; i < 5; i++) {
    if (arr[i] % 2 == 0) {
      evenArr[count] = arr[i];
      count++;
    }
  }
  printf("\nThe even numbers are: ");
  for (int i = 0; i < count; i++) {
    printf("%d ", evenArr[i]);
  }
  return 0;
}
