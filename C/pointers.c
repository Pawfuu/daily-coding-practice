#include <stdio.h>

int main() {

  printf("Pointer : Show the basic declaration of pointer : ");
  printf("\n-------------------------------------------------\n");
  printf("\nHere is m=10, n and o are two integer variable and *z is an "
         "integer\n");

  int m = 10, n, o;
  int *z = &m;

  printf("\nz stores the address of m = %p", &m);
  printf("\n*z sthores the value of m = %d", *z);
  printf("\n&m is the address of m = %p", &m);
  printf("\n&n is the address of n = %p", &n);
  printf("\n&o is the address of o = %p", &o);
  printf("\n&z sores the address of z %p", &z);

  // TIL about the %p is for the address
  return 0;
}
