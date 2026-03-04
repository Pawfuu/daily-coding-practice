// #include "exercise.h"
#include <stdlib.h>
#include <string.h>
//
// void allocate_int(int **pointer_pointer, int value) {
//
//   int *new_ptr = malloc(sizeof(int));
//   *new_ptr = value;
//   *pointer_pointer = new_ptr;
//
// }

// 2 arrays and pointer
// #include "exercise.h"
// #include <stdlib.h>
//
// token_t **create_token_pointer_array(token_t *tokens, size_t count) {
//   token_t **token_pointers = malloc(count * sizeof(token_t *));
//    if (token_pointers == NULL) {
//     exit(1);
//   }
//
//   for (size_t i = 0; i < count; ++i) {
//      token_pointers[i] = malloc(sizeof(token_t));
//     *token_pointers[i] = tokens[i];
//   }
//   return token_pointers;
// }

//  3 void* or pointer
// #include "exercise.h"
//
// void snek_zero_out(void *ptr, snek_object_kind_t kind) {
//   if (kind == INTEGER) {
//     ((snek_int_t*)ptr)->value = 0; // casting is applied to ptr and the value
//     is obtained
//   }else if (kind == FLOAT){
//     ((snek_float_t*)ptr)->value = 0;
//   }else if(kind == BOOL){
//     ((snek_bool_t*)ptr)->value = 0;
//   }
// }

// 4 swaping integers
// void swap_ints(int *a, int *b) {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

// 5 swaping strings
void swap_strings(char **a, char **b) {
  char *temp = *a;
  *a = *b;
  *b = temp;
}

// 6 generic swapping
// void swap(void *vp1, void *vp2, size_t size) {
//   char *temp = malloc(size * sizeof(void));
//
//   if (temp == NULL) {
//     return 1;
//   }
//
//   free(temp);
// }
