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
