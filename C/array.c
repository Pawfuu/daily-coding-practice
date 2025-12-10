#include <stdio.h>

int main() {

  // Array Store & Print
  // int element[10];
  // int i;
  //
  // printf("Input 10 element in the array : \n");
  // for (i = 0; i < 10; i++) {
  //   printf("element - %d : ", i);
  //   scanf(" %d", &element[i]);
  // }
  //
  // printf("\nExpected output: ");
  // printf("\nElements in array are: ");
  // for (i = 0; i < 10; i++) {
  //   printf("%d ", element[i]);
  // }

  // Array Reverse Display
  // int element[3];
  // int arraylen = sizeof(element) / sizeof(element[0]);
  // int i;
  //
  // printf("Input 3 number of elements in the array: \n");
  // for (i = 0; i < 3; i++) {
  //   printf("element - %d : ", i);
  //   scanf("%d", &element[i]);
  // }
  //
  // // Reverse array
  // printf("Expected Output: ");
  // printf("\nThe values store in the array are: \n");
  // for (i = 0; i < arraylen; i++) {
  //   printf("%d ", element[i]);
  // }
  //
  // // Reverse array
  // int left = 0;
  // int right = arraylen - 1;
  // while (left < right) {
  //   int temp = element[left];
  //   element[left] = element[right];
  //   element[right] = temp;
  //
  //   left++;
  //   right--;
  // }
  //
  // printf("\nThe values store into the array in reverse order: \n");
  // for (i = 0; i < arraylen; i++) {
  //   printf("%d ", element[i]);
  // }

  // Array Sum Calculation
  // int element[3];
  // int sum = 0;
  // printf("Input 3 elements in the array: \n");
  // for (int i = 0; i < 3; i++) {
  //   printf("element - %d : ", i);
  //   scanf("%d", &element[i]);
  // }
  //
  // printf("\nExpected Output:");
  // for (int i = 0; i < 3; i++) {
  //   sum += element[i];
  // }
  // printf("\nSum of all elements stored in the array is : %d", sum);

  // Array Copy
  // int elements[3];
  // int secondArr[3];
  // printf("Input 3 elements in the array:\n");
  // for (int i = 0; i < 3; i++) {
  //   printf("element - %d : ", i);
  //   scanf("%d", &elements[i]);
  // }
  //
  // printf("Expected Output:\n");
  // printf("The elements in the first array are:\n");
  // for (int i = 0; i < 3; i++) {
  //   printf("%d", elements[i]);
  // }
  //
  // for (int i = 0; i < 3; i++) {
  //   secondArr[i] = elements[i];
  // }
  // printf("\nThe elements in the second array are:\n");
  // for (int i = 0; i < 3; i++) {
  //   printf("%d", secondArr[i]);
  // }

  // Array Duplicate count
  // int elements[3];
  // printf("Input 3 elements in the array:\n");
  // for (int i = 0; i < 3; i++) {
  //   printf("element - %d : ", i);
  //   scanf("%d", &elements[i]);
  // }
  //
  // // count duplicates in array
  // int count_duplicates = 0;
  // for (int i = 0; i < 3; i++) {
  //   for (int j = i + 1; j < 3; j++) { // count forward
  //     if (elements[i] == elements[j]) {
  //       count_duplicates++;
  //       break;
  //     }
  //   }
  // }
  //
  // printf("Expected Output:\n");
  // printf("Total number of duplicate elements found in array is: %d",
  //        count_duplicates);

  // Print unique elements
  // int size;
  // printf("Input the number of elements to be stored in the array: ");
  // scanf("%d", &size);
  //
  // int arr[size];
  // int sizeofArr = sizeof(arr) / sizeof(arr[0]);
  // printf("\nInput %d elements in the array: \n", size);
  // for (int i = 0; i < size; i++) {
  //   printf("element - %d : ", i);
  //   scanf("%d", &arr[i]);
  // }
  //
  // printf("\nThe unique elements are: \n");
  // int count;
  // for (int i = 0; i < sizeofArr; i++) {
  //   count = 0; // reset the counter
  //   for (int j = 0; j < sizeofArr; j++) { // full scan
  //     if (i != j) {
  //       if (arr[i] == arr[j]) {
  //         count++;
  //       }
  //     }
  //   }
  //   if (count == 0) {
  //     printf("%d ", arr[i]);
  //   }
  // }

  // Merge arrays in DESCENDING ORDER
  // int size1, size2;
  // int arr1[20];
  // int arr2[20];
  // int arr3[40]; // might cause a buffer overflow..
  // int i, j;
  //
  // printf("Input the number of elements to be stored in the first array: ");
  // scanf("%d", &size1);
  // printf("Input %d elements in the array: \n", size1);
  // for (i = 0; i < size1; i++) {
  //   printf("element - %d : ", i);
  //   scanf("%d", &arr1[i]);
  // }
  //
  // printf("Input the number of elements to be stored in the second array: ");
  // scanf("%d", &size2);
  // printf("Input %d elements in the array: \n", size2);
  // for (i = 0; i < size2; i++) {
  //   printf("element - %d : ", i);
  //   scanf("%d", &arr2[i]);
  // }
  //
  // int mergeSizes = size1 + size2;
  // // Merge together
  // for (i = 0; i < size1; i++) {
  //   arr3[i] = arr1[i];
  // }
  // for (j = 0; j < size2; j++) {
  //   arr3[i] = arr2[j];
  //   i++;
  // }
  //
  // // bubble sort then
  // for (i = 0; i < mergeSizes - 1; i++) {
  //   for (j = 0; j < mergeSizes - i - 1; j++) {
  //     if (arr3[j] < arr3[j + 1]) {
  //       int temp = arr3[j];
  //       arr3[j] = arr3[j + 1];
  //       arr3[j + 1] = temp;
  //     }
  //   }
  // }
  // // descending order / ascending order
  // int left = 0;
  // int right = mergeSizes - 1;
  // while (left < right) {
  //   int temp = arr3[left];
  //   arr3[left] = arr3[right];
  //   arr3[right] = temp;
  //
  //   left++;
  //   right--;
  // }
  //
  // printf("\nExpected Output:\n");
  // printf("The merged array in descending order is: ");
  // for (i = 0; i < mergeSizes; i++) {
  //   printf("%d ", arr3[i]);
  // }

  // Frequency Occurence
  // int size;
  // int counted[20];
  //
  // printf("Input the number of elements in the array: ");
  // scanf("%d", &size);
  //
  // int arr[size];
  // printf("\nInput %d elements in the array: \n", size);
  // for (int i = 0; i < size; i++) {
  //   printf("element - %d :", i);
  //   scanf("%d", &arr[i]);
  // }
  //
  // // count the occurences
  // int count = 0;
  // for (int i = 0; i < size; i++) {
  //   if (counted[i] == 1)
  //     continue;
  //   for (int j = i + 1; j < size; j++) {
  //     if (arr[i] == arr[j]) {
  //       count++;
  //     }
  //   }
  // }
  //
  // printf("The frequency ");

  // Find maximum & maximum
  // int size;
  // printf("Input the number of elements to be stored in the array: ");
  // scanf("%d", &size);
  // int arr[size];
  //
  // printf("\nInput %d elements in the array: \n", size);
  // for (int i = 0; i < size; i++) {
  //   printf("element - %d : ", i);
  //   scanf("%d", &arr[i]);
  // }
  //
  // // get the maximum element
  // int max = arr[0];
  // int min = arr[0];
  //
  // for (int i = 1; i < size; i++) {
  //   // check for new maximum
  //   if (arr[i] > max) {
  //     max = arr[i];
  //   }
  //
  //   if (arr[i] < min) {
  //     min = arr[i];
  //   }
  // }
  //
  // printf("\nExpected Output: \n");
  // printf("Maximum element is : %d\n", max);
  // printf("Minimum element is : %d\n", min);

  // Separte Odd & Even Arrays
  // int size;
  // printf("Input the number of elements to be stored in the array: ");
  // scanf("%d", &size);
  //
  // int arr[size];
  // printf("\nInput %d elements in the array: \n", size);
  // for (int i = 0; i < size; i++) {
  //   printf("element - %d : ", i);
  //   scanf("%d", &arr[i]);
  // }
  //
  // // Even and Odd array;
  // int even[5]; // how to allocate size? (malloc)
  // int odd[5];
  //
  // // counter to keep track of many we Find
  // int eCount = 0;
  // int oCount = 0;
  //
  // for (int i = 0; i < size; i++) {
  //   if (arr[i] % 2 == 0) {
  //     even[eCount] = arr[i];
  //     eCount++;
  //   } else {
  //     odd[i] = arr[i];
  //     oCount++;
  //   }
  // }
  //
  // printf("\nExpected Output:");
  // printf("The Even elements are: \n");
  // for (int i = 0; i < eCount; i++) {
  //   printf("%d ", even[i]);
  // }
  // printf("\nThe Odd elements are: \n");
  // for (int i = 0; i < oCount; i++) {
  //   printf("%d ", odd[i]);
  // }

  // SORT ARRAY ASCENDING
  // int size;
  // printf("Input the size of array: ");
  // scanf("%d", &size);
  //
  // int arr[size];
  // printf("\nInput %d elements in the array: \n", size);
  // for (int i = 0; i < size; i++) {
  //   printf("element - %d : ", i);
  //   scanf("%d", &arr[i]);
  // }
  //
  // // bubble sort
  // for (int i = 0; i < size - 1;
  //      i++) { // controls how many times you pass through the list
  //   for (int j = 0; j < size - i - 1; j++) { // inner loop does the swaping
  //     if (arr[j] > arr[j + 1]) {
  //       int temp = arr[j];
  //       arr[j] = arr[j + 1];
  //       arr[j + 1] = temp;
  //     }
  //   }
  // }
  //
  // printf("\nExpected Output:\n");
  // printf("Element of array in sorted ascrighting order: \n");
  // for (int i = 0; i < size; i++) {
  //   printf("%d ", arr[i]);
  // }

  // SORT ARRAY DESCENDING
  // int size;
  // printf("Input the size of array : ");
  // scanf("%d", &size);
  //
  // int arr[size];
  //
  // printf("\nInput %d elements in the array : \n", size);
  // for (int i = 0; i < size; i++) {
  //   printf("element - %d : ", i);
  //   scanf("%d", &arr[i]);
  // }
  //
  // // bubble sort
  // for (int i = 0; i < size - 1; i++) {
  //   for (int j = 0; j < size - i - 1; j++) {
  //     if (arr[j] < arr[j + 1]) {
  //       int temp = arr[j];
  //       arr[j] = arr[j + 1];
  //       arr[j + 1] = temp;
  //     }
  //   }
  // }
  //
  // int start = 0;
  // int end = size - 1;
  //
  // // descending order
  // for (int i = 0; i < size; i++) {
  //   if (arr[start] < arr[end]) {
  //     int temp = arr[start];
  //     arr[start] = arr[end];
  //     arr[end] = temp;
  //
  //     start++;
  //     end--;
  //   }
  // }
  //
  // printf("\nExpected Output :\n");
  // printf("Elements of the array in sorted descending order: \n");
  // for (int i = 0; i < size; i++) {
  //   printf("%d ", arr[i]);
  // }

  // INSERT IN SORTED ARRAY
  // int size;
  // printf("Input the number of elements you want to insert(max 100): ");
  // scanf("%d", &size);
  // if (size > 100) {
  //   printf("\nERROR!! MAXIMUM OF 100 ONLY");
  //   return 1; // exits the program
  // }
  //
  // int arr[101];
  // printf("Input %d elements in the array in ascending order: \n", size);
  // for (int i = 0; i < size; i++) {
  //   printf("element - %d : ", i);
  //   scanf("%d", &arr[i]);
  // }
  // int value;
  // // get value
  // printf("Input the value to be inserted : ");
  // scanf("%d", &value);
  //
  // // PRINT THE EXISTING ARRAY LIST
  // for (int i = 0; i < size; i++) {
  //   printf("%d ", arr[i]);
  // }
  //
  // // Get input and add the size of array
  // int position;
  //
  // // determine postion
  // for (int i = 0; i < size; i++) {
  //   if (value < arr[i]) {
  //     position = i;
  //     break;
  //   } else {
  //     position = i + 1;
  //   }
  // }
  // size++;
  // // move elements in the right
  // for (int i = size; i >= position; i--) {
  //   arr[i + 1] = arr[i];
  // }
  //
  // arr[position] = value;
  // printf("\nAfter Insert the list is :\n");
  // // print the list after insert
  // for (int i = 0; i < size; i++) {
  //   printf("%d ", arr[i]);
  // }
  // // AFTER SOLVING: I've made two errors. I was struggling on whether I
  // should
  // // just manually put 101 or let it be the size. I decide to get size but I
  // got
  // // an error afterwards because size is already initialized and you can't
  // add
  // // another. #2 was that I've tried other solutions such as tyring to get
  // // bubble sort algo to be involve then realized that wasn't efficient and
  // gave
  // // in after 20-30mins for looking for alternative solutions.

  // Insert in Unsorted Array
  int size;
  printf("Input the size of array: ");
  scanf("%d", &size);
  int arr[100];
  printf("\nInput the %d elements in the array in ascending order: \n", size);
  for (int i = 0; i < size; i++) {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }
  int value, position;
  printf("\nInput the value to be inserted : ");
  scanf("%d", &value);
  printf("Input the Position, where the value to be inserted : ");
  scanf("%d", &position);
  // Print the current array order
  printf("\nThe current list of the array: \n");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  size++;
  // move array right
  for (int i = size; i > position - 1; i--) {
    arr[i + 1] = arr[i];
  }

  arr[position] = value;

  // bubble sort?
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }

  // Print after insert
  printf("\nAfter Insert the element the new lists is :  \n");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
