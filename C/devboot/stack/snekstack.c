// LOW LVL STACKJj
// #include "snekstack.h"
// #include <stdlib.h>
//
// stack_t *stack_new(size_t capacity) {
//   stack_t *new_stack = malloc(sizeof(stack_t));
//   if (new_stack == NULL) {
//     return NULL;
//   }
//
//   new_stack->count = 0;
//   new_stack->capacity = capacity;
//
//   new_stack->data = malloc(capacity * sizeof(void *));
//   if (new_stack->data == NULL) {
//     free(new_stack);
//     return NULL;
//   }
//   return new_stack;
// }

// As you can see stack-> is called repeatedly think of it as this.myObject in
// JavaScript

// STACK PUSH, POP, & FREE

#include "snekstack.h"
#include <assert.h>
#include <stddef.h>
#include <stdlib.h>

void stack_free(stack_t *stack) {
  if (stack == NULL) {
    return;
  }

  if (stack->data != NULL) {
    free(stack->data);
  }
  free(stack);
}

void *stack_pop(stack_t *stack) {
  if (stack->count == 0) { // not null
    return NULL;
  }

  stack->count--;
  return stack->data[stack->count];
}

void stack_push(stack_t *stack, void *obj) {
  // checks if full
  if (stack->count == stack->capacity) {
    // Doubles the capacity
    stack->capacity *= 2;

    // temp pointer / placeholder
    void **tmp_data = realloc(stack->data, stack->capacity * sizeof(void *));

    if (tmp_data == NULL) {
      stack->capacity = stack->capacity / 2;
      return;
    }
    // Reallocation succeeded
    stack->data = tmp_data;
  }

  // push the array
  stack->data[stack->count] = obj;
  stack->count++;

  // don't touch below this line
}

stack_t *stack_new(size_t capacity) {
  stack_t *stack = malloc(sizeof(stack_t));
  if (stack == NULL) {
    return NULL;
  }

  stack->count = 0;
  stack->capacity = capacity;
  stack->data = malloc(stack->capacity * sizeof(void *));
  if (stack->data == NULL) {
    free(stack);
    return NULL;
  }

  return stack;
}
