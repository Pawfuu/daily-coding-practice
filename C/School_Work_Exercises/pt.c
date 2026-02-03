#include <math.h>
#include <stdio.h>

int main() {

  double num;

  printf("Enter a number: ");
  scanf("%lf", &num);

  printf("Original Number: %.2f\n", num);
  printf("Square root: %.2f\n", sqrt(num));
  printf("Cube (pow): %.2f\n", pow(num, 3));
  printf("Rounded: %2.f\n", round(num));
  printf("Ceiling: %2.f\n", ceil(num));
  printf("Floor: %2.f\n", floor(num));

  // run this command with math
  // you can also open terminal lazyvim through space f t
  // gcc pt.c -o pt -lm && ./pt

  return 0;
}
