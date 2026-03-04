// #include "exercise.h"
// #include <stdio.h>
//
// int main() {
//   printMessageOne();
//   printMessageTwo();
//   printMessageThree();
//   return 0;
// }
//
// void printMessageOne() {
//   const char *message = "Dark mode?\n";
//   printStackPointerDiff();
//   printf("%s\n", message);
// }
//
// void printMessageTwo() {
//   const char *message = "More like...\n";
//   printStackPointerDiff();
//   printf("%s\n", message);
// }
//
// void printMessageThree() {
//   const char *message = "dark roast.\n";
//   printStackPointerDiff();
//   printf("%s\n", message);
// }
//
// // don't touch below this line
//
// void printStackPointerDiff() {
//   static void *last_sp = NULL;
//   void *current_sp;
//   current_sp = __builtin_frame_address(0);
//   long diff = (char *)last_sp - (char *)current_sp;
//   if (last_sp == NULL) {
//     last_sp = current_sp;
//     diff = 0;
//   }
//   printf("---------------------------------\n");
//   printf("Stack pointer offset: %ld bytes\n", diff);
//   printf("---------------------------------\n");
// }
//

// 2 - Stack overflow testing
//
// #include <stdio.h>
//
// int main() {
//
//   const int pool_size = 10 * 1024; // this are written as bytes
//   char snek_pool[pool_size];
//   snek_pool[0] = 's';
//   snek_pool[1] = 'n';
//   snek_pool[2] = 'e';
//   snek_pool[3] = 'k';
//   snek_pool[4] = '\0';
//
//   printf("Size of pool: %d\n", pool_size);
//   printf("Initial string: %s\n", snek_pool);
//
//   return 0;
// }

// 3 - Pointers to the Stack
// #include <stdio.h>
//
// typedef struct {
//   int x;
//   int y;
// } coord_t;
//
// __attribute__((noinline))
//
// // Don't touch above this line
//
// coord_t
// new_coord(int x, int y) {
//   coord_t c;
//   c.x = x;
//   c.y = y;
//   return c;
// }
//
// int main() {
//   coord_t c1 = new_coord(10, 20);
//   coord_t c2 = new_coord(30, 40);
//   coord_t c3 = new_coord(50, 60);
//
//   printf("c1: %d, %d\n", c1.x, c1.y);
//   printf("c2: %d, %d\n", c2.x, c2.y);
//   printf("c3: %d, %d\n", c3.x, c3.y);
// }
//
// #include  "heap.c"
// #include <stdio.h>
// #include <stdlib.h>
// #include <assert.h>
//
// // Forward declaration of your function (so you don't need a separate .h file
// if you compile together) int *allocate_scalar_array(int size, int
// multiplier);
//
// int main() {
//     printf("Running tests for allocate_scalar_array...\n");
//
//     // --- TEST 1: Basic Functionality ---
//     printf("Test 1: Check values (Size: 5, Multiplier: 2)... ");
//     int size = 5;
//     int multiplier = 2;
//     int *result = allocate_scalar_array(size, multiplier);
//
//     assert(result != NULL); // Fail if it returns NULL
//
//     // Check specific values: 0, 2, 4, 6, 8
//     assert(result[0] == 0);
//     assert(result[1] == 2);
//     assert(result[2] == 4);
//     assert(result[3] == 6);
//     assert(result[4] == 8);
//
//     free(result); // Clean up
//     printf("PASSED\n");
//
//
//     // --- TEST 2: Zero Multiplier ---
//     printf("Test 2: Check zero multiplier (Size: 3, Multiplier: 0)... ");
//     size = 3;
//     multiplier = 0;
//     result = allocate_scalar_array(size, multiplier);
//
//     assert(result != NULL);
//     // All values should be 0
//     for(int i = 0; i < size; i++) {
//         assert(result[i] == 0);
//     }
//
//     free(result);
//     printf("PASSED\n");
//
//
//     // --- TEST 3: Safe Large Allocation ---
//     printf("Test 3: Large allocation (Size: 1000)... ");
//     size = 1000;
//     multiplier = 10;
//     result = allocate_scalar_array(size, multiplier);
//
//     if (result != NULL) {
//         assert(result[0] == 0);
//         assert(result[999] == 9990);
//         free(result);
//     } else {
//         printf("(Skipped - Allocation failed gracefully) ");
//     }
//     printf("PASSED\n");
//
//     printf("----------------------------\n");
//     printf("ALL TESTS PASSED SUCCESSFULLY!\n");
//     return 0;
// }

// Free
// #include "exercise.h"
// #include <stdio.h>
// #include <stdlib.h>
//
// int main(){
//   const int num_lists = 500;
//   for(int i = 0; i < num_lists; i++){
//     int *lst = allocate_scalar_list(50000, 2);
//     if (lst == NULL) {
//       printf("Failed to allocate list\n");
//     }else{
//       printf("Allocated list %d\n", i);
//       free(lst);
//     }
//   }
//   return 0;
// }

// STACK DATA STRUCTURE
// #include "snekstack.h"
// #include <assert.h>
// #include <stdio.h>
// #include <stdlib.h>
//
// int main() {
//   printf("Running tests for stack_new...\n");
//
//   // --- TEST 1: Small Stack ---
//   printf("Test 1: Create small stack (capacity 3)... ");
//   stack_t *s1 = stack_new(3);
//   assert(s1 != NULL);
//   assert(s1->capacity == 3);
//   assert(s1->count == 0);
//   assert(s1->data != NULL);
//
//   // Cleanup
//   free(s1->data);
//   free(s1);
//   printf("PASSED\n");
//
//   // --- TEST 2: Large Stack ---
//   printf("Test 2: Create large stack (capacity 100)... ");
//   stack_t *s2 = stack_new(100);
//   assert(s2 != NULL);
//   assert(s2->capacity == 100);
//   assert(s2->count == 0);
//   assert(s2->data != NULL);
//
//   // Cleanup
//   free(s2->data);
//   free(s2);
//   printf("PASSED\n");
//
//   printf("----------------------------\n");
//   printf("ALL TESTS PASSED SUCCESSFULLY!\n");
//   return 0;
// }

// STACK PUSH
// #include "snekstack.h"
// #include <assert.h>
// #include <stdio.h>
// #include <stdlib.h>
//
// int main() {
//   printf("Running tests for stack_push...\n");
//
//   // --- TEST 1: Basic Push (No Resize Needed) ---
//   printf("Test 1: Push elements without resizing... ");
//   stack_t *s1 = stack_new(2);
//   assert(s1 != NULL);
//
//   int a = 1;
//   int b = 2;
//
//   stack_push(s1, &a);
//   assert(s1->count == 1);
//   assert(s1->capacity == 2);
//   assert(s1->data[0] == &a); // Check if 'a' is at index 0
//
//   stack_push(s1, &b);
//   assert(s1->count == 2);
//   assert(s1->capacity == 2);
//   assert(s1->data[1] == &b); // Check if 'b' is at index 1
//
//   free(s1->data);
//   free(s1);
//   printf("PASSED\n");
//
//   // --- TEST 2: Push with Resize (Capacity Doubling) ---
//   printf("Test 2: Push element that triggers resize... ");
//   stack_t *s2 = stack_new(2);
//
//   int x = 10, y = 20, z = 30;
//
//   // Fill the stack to its limit (capacity 2)
//   stack_push(s2, &x);
//   stack_push(s2, &y);
//   assert(s2->count == 2);
//   assert(s2->capacity == 2);
//
//   // Push one more to trigger your reallocation logic!
//   stack_push(s2, &z);
//
//   assert(s2->count == 3);    // Count should now be 3
//   assert(s2->capacity == 4); // Capacity should have doubled from 2 to 4
//   assert(s2->data[2] == &z); // The new element should be securely at index 2
//
//   free(s2->data);
//   free(s2);
//   printf("PASSED\n");
//
//   printf("----------------------------\n");
//   printf("ALL TESTS PASSED SUCCESSFULLY!\n");
//   return 0;
// }

// Test Stack POP
// #include "snekstack.h"
// #include <assert.h>
// #include <stdio.h>
// #include <stdlib.h>
//
// void test_pop_empty() {
//   printf("Test 1: Pop from an empty stack...");
//   // ARRANGE
//   stack_t *s = stack_new(2);
//
//   // ACT
//   void *popped = stack_pop(s);
//
//   // ASSERT: Should return NULL because ther is nothing to popped
//   assert(popped == NULL);
//
//   // CLEANUP
//   free(s->data);
//   free(s);
//   printf("PASSED\n");
// }
//
// void test_pop_items() {
//   printf("Test 2: Push and pop multiple items... ");
//   // ARRANGE
//   stack_t *s = stack_new(2);
//   int a = 10, b = 20, c = 30;
//
//   stack_push(s, &a);
//   stack_push(s, &b);
//   stack_push(s, &c); // Triggers capacity doubling!
//
//   // Stack is LIFO (Last in, First Out). So 'c' comes out first;
//   int *popped;
//
//   popped = stack_pop(s);
//   assert(*popped == 30);
//
//   popped = stack_pop(s);
//   assert(*popped == 20);
//
//   popped = stack_pop(s);
//   assert(*popped == 10);
//
//   // stack is now empty next pop should be NULL
//   popped = stack_pop(s);
//   assert(popped == NULL);
//
//   // CLEANUP
//   free(s->data);
//   free(s);
//   printf("PASSED\n");
// }
//
// int main() {
//   printf("=== Testing stack_pop ===\n");
//   test_pop_empty();
//   test_pop_items();
//   printf("=== All Test Passed! ==\n");
//
//   return 0;
// }

// Test stack free
// #include "snekstack.h"
// #include <assert.h>
// #include <stdio.h>
// #include <stdlib.h>
//
// void create_small_stack() {
//   printf("TEST 1: CREATE A SMALL STACK (CAPACITY 3)");
//
//   stack_t *s = stack_new(3);
//
//   assert(s != NULL);
//   assert(s->capacity == 3);
//   assert(s->count == 0);
//   assert(s->data != NULL);
//
//   // CLEANUP
//   free(s->data);
//   free(s);
//
//   printf("PASSED\n");
// }
//
// void create_large_stack() {
//   printf("TEST 2: CREATE A LARGE STACK (CAPACITY 100)");
//
//   stack_t *s = stack_new(100);
//   assert(s != NULL);
//   assert(s->capacity == 100);
//   assert(s->count == 0);
//   assert(s->data != NULL);
//
//   // CLEANUP
//   free(s->data);
//   free(s);
//
//   printf("PASSED\n");
// }
//
// int main() {
//
//   // TEST SMALL STACK
//   printf("TESTING STACK NEW\n");
//
//   create_small_stack();
//   create_large_stack();
//
//   printf("ALL TEST PASSED!");
//   return 0;
// }

// Dangerous Push
#include "exercise.h"
#include "snekstack.h"
#include <assert.h>
#include <stdint.h> // Included for safe point to integer casting
#include <stdio.h>
#include <stdlib.h>

void test_heterogenous_stack() {
  printf("Test 1: Push different types onto the stack..");

  stack_t *s = stack_new(2);
  assert(s != NULL);

  scary_double_push(s);

  // extract and check the raw number (1337)
  // check if both items actually make it into the stack??
  assert(s->count == 2);
  long value = (long)s->data[0];
  assert(value == 1337);

  // extract and check the raw number (1024)
  // cast void* back into an int* so we can dereference it.
  int *pointer = (int *)s->data[1];
  assert(*pointer == 1024);

  free(pointer);
  stack_free(s);
  printf("PASSED\n");
}

int main() {

  printf("Testing scary_double_push\n");

  test_heterogenous_stack();
  printf("ALL TEST PASSED! \n");
  return 0;
}
