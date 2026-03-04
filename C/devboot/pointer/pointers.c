#include <stdio.h>

int sum(int *fnum, int *snum);

void swapChar(char *ch1, char *ch2);

void factorNum(int, int *);

int main() {
  //
  // printf("Pointer : Show the basic declaration of pointer : ");
  // printf("\n-------------------------------------------------\n");
  // printf("\nHere is m=10, n and o are two integer variable and *z is an "
  //        "integer\n");
  //
  // int m = 10, n, o;
  // int *z = &m;
  //
  // printf("\nz stores the address of m = %p", &m);
  // printf("\n*z sthores the value of m = %d", *z);
  // printf("\n&m is the address of m = %p", &m);
  // printf("\n&n is the address of n = %p", &n);
  // printf("\n&o is the address of o = %p", &o);
  // printf("\n&z sores the address of z %p", &z);
  //
  // // TIL about the %p is for the address

  // 2
  // int m = 29;
  // printf("Address of m : %p", &m);
  // printf("\nValue of m : %d", m);
  // printf("\n\nNow ab is assigned with the address of m.");
  // int *ab = &m;
  // printf("\nAddress of pointer ab : %p", &ab);
  // printf("\nContent of pointer ab : %d", *ab);
  // m = 34;
  // printf("\n\nThe value of m assigned to 34 now.");
  // printf("\nAddress of pointer ab : %p", &ab);
  // printf("\nContent of pointer ab : %d", *ab);
  // *ab = 7;
  // printf("\n\nThe pointer variable ab is assigned with the value of 7 now.");
  // printf("\nAddress of m : %p", &m);
  // printf("\nValue of m : %d", m);

  // 4 // call by value
  // int fnum, secnum, *fptr, *sptr;
  // printf("Input the first number : ");
  // scanf("%d", &fnum);
  // printf("Input the second numner : ");
  // scanf("%d", &secnum);
  //
  // fptr = &fnum;
  // sptr = &secnum;
  //
  // int sum = *fptr + *sptr;
  // printf("\nThe sum of the entered numbers is : %d", sum);

  // 5 call by reference
  // int fnum, secnum, *fptr, *sptr;
  // printf("Input the first number : ");
  // scanf("%d", &fnum);
  // printf("Input the second numner : ");
  // scanf("%d", &secnum);
  //
  // int total = sum(&fnum, &secnum);
  // printf("The sum of %d and %d is %d", fnum, secnum, total);

  // 6 Max of two Pointers
  // int fnum, snum, max;
  // int *fptr = &fnum;
  // int *ptr2 = &snum;
  //
  // printf("Input the first number: ");
  // scanf("%d", &fnum);
  // printf("Input the second number: ");
  // scanf("%d", &snum);
  //
  // if (*fptr < *ptr2) {
  //   printf("\n%d is the maximum number", *ptr2);
  // } else {
  //   printf("\n%d is the maximum number", *fptr);
  // }

  // 7 - Print array using pointers
  // int n;
  // printf("Input the number of elements to store in the array: ");
  // scanf("%d", &n);
  // int arr[25];
  // printf("Input %d elements of elements in the array:\n", n);
  // for (int i = 0; i < n; i++) {
  //   printf("elemeent - %d : ", i);
  //   scanf("%d", arr + i);
  // }
  // printf("\n\nThe elements you've entered are: \n");
  // for (int i = 0; i < n; i++) {
  //   printf("elemeent - %d : %d\n", i, *(arr + i));
  // }

  // 8 - Permetuations

  // 12 - factorials
  int fact, num1;
  printf("Input a number :");
  scanf("%d", &num1);

  factorNum(num1, &fact);

  printf("The Factorial of %d is : %d", num1, fact);

  // Pointers & Arrays
  // int A[] = {2, 4, 5, 8, 1};
  // Address - &A[i] or (A + 1)
  // printf("%d\n", A); // calls address
  // printf("%d\n", &A[0]);
  // printf("%d\n", (A + 1));
  // // Value - A[i] or *(A+1)
  // printf("%d\n", A[0]); // calls values
  // printf("%d\n", *A);
  // printf("%d\n", *(A + 1)); // dereferene to call value
  // return 0;
}

void swapChar(char *ch1, char *ch2) {
  char temp = *ch1;
  *ch1 = *ch2;
  *ch2 = temp;
}

void factorNum(int num1, int *f) {
  int i;
  *f = 1;
  for (i = 1; i <= num1; i++) {
    *f = *f * i;
  }
}

// void charPermu(char *arr, int snum, int endnum) {
//   int i;
//   if (snum == endnum) {
//     printf(
//         "%s ",
//         arr); // Prints the generated Permetuations if first and nums are
//         equal
//   } else {
//     for (i = snum; i < endnum; i++) {
//       swapChar((char + snum), (cht + i));
//       charPermu((arr, snum + 1, endnum)); // recursive generate Permetuations
//       swapChar((char + snum), (cht + i));
//     }
//   }
// }
//
int sum(int *fnum, int *snum) { return *fnum + *snum; }
