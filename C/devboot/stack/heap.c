#include "exercise.h"
#include "stdio.h"
#include "stdlib.h"
//
// char *get_full_greeting(char *greeting, char *name, int size){
//   char full_greeting[size];
//   snprintf(full_greeting, size, "%s %s", greeting, name);
//   return full_greeting;
// }
//
// int *allocate_scalar_array(int size, int multiplier){
//   int *arr = malloc(size * sizeof(int));
//
//   if(arr == NULL){
//     return NULL;
//   }
//
//   // populate the array
//   for(int i = 0; i < size; i++){
//     arr[i] = i * multiplier;
//   }
//   return arr;
// }

int *allocate_scalar_list(int size, int multiplier) {
  int *lst = malloc(size * sizeof(int));
  if (lst == NULL) {
    return NULL;
  }
  for (int i = 0; i < size; i++) {
    lst[i] = i * multiplier;
  }
  return lst;
}
