// #include "exercise.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <assert.h>
//
// int main() {
//     printf("Running tests for allocate_int...\n");
//
//     // --- TEST 1: Allocate from NULL ---
//     printf("Test 1: Allocate new pointer... ");
//     int *my_ptr = NULL;
//
//     // We pass the ADDRESS of the pointer (&my_ptr)
//     // This allows the function to modify 'my_ptr' itself.
//     allocate_int(&my_ptr, 10);
//
//     assert(my_ptr != NULL);      // Pointer should point to something
//     assert(*my_ptr == 10);       // The value inside should be 10
//
//     free(my_ptr); // Clean up
//     printf("PASSED\n");
//
//
//     // --- TEST 2: Do not overwrite original ---
//     printf("Test 2: Check for overwrite... ");
//     int original_val = 5;
//     int *ptr_2 = &original_val; // ptr_2 points to stack memory (5)
//
//     // We want ptr_2 to stop pointing to 'original_val'
//     // and start pointing to a NEW malloc'd integer (20).
//     allocate_int(&ptr_2, 20);
//
//     // 1. The original variable should NOT change
//     assert(original_val == 5);
//
//     // 2. The pointer should now point to the new value
//     assert(*ptr_2 == 20);
//     assert(ptr_2 != &original_val); // Addresses should be different
//
//     free(ptr_2); // Clean up the NEW memory
//     printf("PASSED\n");
//
//     printf("----------------------------\n");
//     printf("ALL TESTS PASSED SUCCESSFULLY!\n");
//     return 0;
// }

// 2
// #include "exercise.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <assert.h>
//
// int main() {
//     printf("Running tests for create_token_pointer_array...\n");
//
//     // --- TEST 1: Single Token ---
//     printf("Test 1: Single Token... ");
//     token_t single_token = {"hello", 1, 1};
//
//     // Call your function
//     token_t **result = create_token_pointer_array(&single_token, 1);
//
//     assert(result != NULL);           // Array itself exists
//     assert(result[0] != NULL);        // The item inside exists
//
//     // Check values
//     assert(strcmp(result[0]->literal, "hello") == 0);
//     assert(result[0]->line == 1);
//
//     // CRITICAL CHECK: The address must be DIFFERENT (Heap vs Stack)
//     assert(result[0] != &single_token);
//
//     // Cleanup
//     free(result[0]); // Free the item
//     free(result);    // Free the container
//     printf("PASSED\n");
//
//
//     // --- TEST 2: Multiple Tokens ---
//     printf("Test 2: Multiple Tokens... ");
//     token_t tokens[3] = {
//         {"foo", 1, 1},
//         {"bar", 2, 5},
//         {"baz", 3, 10},
//     };
//
//     token_t **multi_result = create_token_pointer_array(tokens, 3);
//     assert(multi_result != NULL);
//
//     for (int i = 0; i < 3; i++) {
//         // Check content
//         assert(strcmp(multi_result[i]->literal, tokens[i].literal) == 0);
//
//         // Check that it is a COPY (different address)
//         assert(multi_result[i] != &tokens[i]);
//
//         // Cleanup individual items
//         free(multi_result[i]);
//     }
//     // Cleanup container
//     free(multi_result);
//     printf("PASSED\n");
//
//     printf("----------------------------\n");
//     printf("ALL TESTS PASSED SUCCESSFULLY!\n");
//     return 0;
// }

// 3
// #include "exercise.h"
// #include <stdio.h>
// #include <assert.h>
// int main() {
//     printf("Running tests for snek_zero_out...\n");
//
//     // TEST 1: Integer
//     printf("Test 1: Zero out Integer... ");
//     snek_int_t my_int;
//     my_int.value = 42;
//     snek_zero_out(&my_int, INTEGER);
//     assert(my_int.value == 0);
//     printf("PASSED\n");
//
//     // TEST 2: Float
//     printf("Test 2: Zero out Float... ");
//     snek_float_t my_float;
//     my_float.value = 3.14f;
//     snek_zero_out(&my_float, FLOAT);
//     // Note: checking strict equality for 0.0 is generally safe
//     assert(my_float.value == 0.0f);
//     printf("PASSED\n");
//
//     // TEST 3: Boolean
//     printf("Test 3: Zero out Bool... ");
//     snek_bool_t my_bool;
//     my_bool.value = 1;
//     snek_zero_out(&my_bool, BOOL);
//     assert(my_bool.value == 0);
//     printf("PASSED\n");
//
//     // TEST 4: Non-zero inputs
//     printf("Test 4: Clearing negative/large values... ");
//     snek_int_t neg_int; neg_int.value = -100;
//     snek_float_t neg_float; neg_float.value = -99.99f;
//     snek_bool_t large_bool; large_bool.value = 255;
//
//     snek_zero_out(&neg_int, INTEGER);
//     snek_zero_out(&neg_float, FLOAT);
//     snek_zero_out(&large_bool, BOOL);
//
//     assert(neg_int.value == 0);
//     assert(neg_float.value == 0.0f);
//     assert(large_bool.value == 0);
//     printf("PASSED\n");
//
//     printf("----------------------------\n");
//     printf("ALL TESTS PASSED SUCCESSFULLY!\n");

// 4
// #include "exercise.h"
// #include <assert.h>
// #include <stdio.h>
//
// int main() {
//   printf("Running tests for swap_ints...\n");
//
//   // --- TEST 1: Swap two different integers ---
//   printf("Test 1: Swap 5 and 6... ");
//   int a = 5;
//   int b = 6;
//
//   swap_ints(&a, &b);
//
//   assert(a == 6); // a should now be 6
//   assert(b == 5); // b should now be 5
//   printf("PASSED\n");
//
//   // --- TEST 2: Swap the same integer ---
//   printf("Test 2: Swap variable with itself... ");
//   int c = 5;
//
//   swap_ints(&c, &c);
//
//   assert(c == 5); // c should still be 5
//   printf("PASSED\n");
//
//   printf("----------------------------\n");
//   printf("ALL TESTS PASSED SUCCESSFULLY!\n");

// 5
#include "exercise.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

int main() {
  printf("Running tests for swap_strings...\n");

  // --- TEST 1: Swap "Hello" and "Goodbye" ---
  printf("Test 1: Swap basic strings... ");
  char *a = "Hello";
  char *b = "Goodbye";

  swap_strings(&a, &b);

  assert(strcmp(a, "Goodbye") == 0);
  assert(strcmp(b, "Hello") == 0);
  printf("PASSED\n");

  // --- TEST 2: Swap long and short strings ---
  printf("Test 2: Swap terminal.shop and ssh... ");
  char *c = "terminal.shop";
  char *d = "ssh";

  swap_strings(&c, &d);

  assert(strcmp(c, "ssh") == 0);
  assert(strcmp(d, "terminal.shop") == 0);
  printf("PASSED\n");

  printf("----------------------------\n");
  printf("ALL TESTS PASSED SUCCESSFULLY!\n");
  return 0;
}
