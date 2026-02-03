#include <stddef.h>
#include <stdio.h>

typedef enum Color {
  RED = 55,
  GREEN = 176,
  BLUE = 38,
} color_t;

typedef enum {
  HTTP_BAD_REQUEST = 400,
  HTTP_UNAUTHORIZED = 401,
  HTTP_NOT_FOUND = 404,
  HTTP_TEAPOT = 418,
  HTTP_INTERNAL_SERVER_ERROR = 500
} http_error_code_t;

typedef enum {
  BIG = 123412341234,
  BIGGER,
  BIGGEST,
} BigNumbers;

char *http_to_str(http_error_code_t code);

int main() {

  printf("The size of BigNumbers is %zu bytes\n", sizeof(BigNumbers));
  printf("The size of HttpErrorCode is %zu bytes\n", sizeof(http_error_code_t));
  return 0;
}
