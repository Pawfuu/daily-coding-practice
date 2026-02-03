#include <stdio.h>

int totalSum(int start, int end) {
  int total = 0;
  while (start <= end) {
    total += start;
    start++;
  }
  return total; // for the meantime
}

int main() {
  int sum;
  int start, end;
  printf("Enter start of the series: ");
  scanf("%d", &start);
  printf("Enter end of the series: ");
  scanf("%d", &end);

  sum = totalSum(start, end);
  printf("The sum of the numbers from %d to %d is %d", start, end, sum);
  return 0;
}
