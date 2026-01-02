#include <math.h>
#include <stdio.h>

int checkPrime(double num) {

  double sqrt_n = sqrt(num);

  if (num == 1) {
    return 0;
  } else if () {
  }

  return 1;
}

int main() {

  // PROGRAMMING EXERCISES 6-2
  // An integer is considered prime if its only factors are 1 and itself. 1 can
  // be considered a prime integer because its factors are 1 and only 1. Write a
  // program that will input a nonnegative and would call the function prime
  // that returns 0 for true and 1 for false. (Precondition: Test if the entered
  // value is nonnegative

  double num;

  printf("Input number to check if it's a prime integer: ");
  scanf("%lf", &num);

  if (num < 1) {

  } else {
    printf("\nINALID INPUT! ENTER A VALUE THAT IS NONNEGATIVE! ");
  }

  return 0;
}
