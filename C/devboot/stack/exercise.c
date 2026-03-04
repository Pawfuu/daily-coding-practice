#include "snekstack.h"
#include "stdlib.h"

void scary_double_push(stack_t *s) {

  stack_push(s, (void *)1337);
  // push heap allocated memory
  int *ptr = malloc(sizeof(int));
  *ptr = 1024;

  stack_push(s, ptr);
}
