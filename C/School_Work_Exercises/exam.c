#include <stdio.h>
#include <string.h>

int main() {
  // #1
  // int n;
  // printf("Input: ");
  // scanf("%d", &n);
  // printf("Output: %d", n);
  //

  // #2
  // float sum, average;
  // int length = 10;
  // float n[length];
  //
  // for (int i = 0; i < length; i++) {
  //   printf("Input %d: ", i);
  //   scanf("%f", &n[i]);
  // }
  //
  // // get the sum
  // for (int i = 0; i < length; i++) {
  //   sum += n[i];
  // }
  // // get average
  // average = sum / length;
  // printf("\nSum: %.2lf", sum);
  // printf("\nAverage : %.2lf", average);

  // #3
  // int length = 5;
  // int arr[length];
  // printf("FIND THE LARGEST ELEMENT\n");
  // for (int i = 0; i < length; i++) {
  //   printf("Input : ");
  //   scanf("%d", &arr[i]);
  // }
  //
  // int max = arr[0];
  // // find largest element
  // for (int i = 0; i < length; i++) {
  //   if (max < arr[i]) {
  //     max = arr[i];
  //   }
  // }
  // printf("\nLargest element: %d", max);

  // #4
  // int length = 5;
  // int arr[length];
  // printf("COUNT EVEN NUMBERS IN ARRAY\n");
  // for (int i = 0; i < length; i++) {
  //   printf("Input : ");
  //   scanf("%d", &arr[i]);
  // }
  //
  // int count;
  // // count
  // for (int i = 0; i < length; i++) {
  //   if (arr[i] % 2 == 0) {
  //     count += 1;
  //   } else {
  //     continue;
  //   }
  // }
  //
  // printf("\nEven numbers in the array : %d", count);

  // #5
  // int arr[] = {1, 2, 3, 4, 5};
  // int length = sizeof(arr) / sizeof(arr[0]);
  // int right = length - 1;
  // int left = 0;
  //
  // while (left < right) {
  //   int temp = arr[left];
  //   arr[left] = arr[right];
  //   arr[right] = temp;
  //
  //   left++;
  //   right--;
  // }
  //
  // for (int i = 0; i < 5; i++) {
  //   printf("%d ", arr[i]);
  // }

  //  #6
  // int arr[] = {78, 64, 24, 14, 46, 24, 88, 90};
  // int length = sizeof(arr) / sizeof(arr[0]);
  // int search, index;
  // printf("Search element: ");
  // scanf("%d", &search);
  //
  // for (int i = 0; i < length; i++) {
  //   if (search == arr[i]) {
  //     index = i;
  //     break;
  //   } else {
  //     index = -1;
  //   }
  // }
  // if (index != -1) {
  //   printf("Found at index %d", index);
  // } else {
  //   printf("Element not found in the array.");
  // }

  // #7
  int arr[] = {4, 5, 1, 5, 2, 1, 4, 2, 3, 7, 9};
  int copy[11];
  return 0;
}
