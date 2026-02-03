#include <stdio.h>
#include <string.h>

int getCommonCount(char name1[], char name2[], char label[]) {
  int count = 0;
  char match[50]; // to store the letters

  // search common letters
  for (int i = 0; i < strlen(name1); i++) {
    if (name1[i] == ' ') {
      continue;
    }
    for (int j = 0; j < strlen(name2); j++) {
      if (name1[i] == name2[j]) {
        match[count] = name1[i];
        count++;
        break;
      }
    }
  }

  // Print the results
  printf("Number of common letters %s: %d (", label, count);

  for (int k = 0; k < count; k++) {
    printf("%c", match[k]);

    if (k < count - 1) { // print comma if not last letter
      printf(", ");
    }
  }

  printf(")\n");
  return count;
}

int main() {

  char girl[50];
  char boy[50];

  // Input names
  printf("Name of Boy: ");
  fgets(boy, 50, stdin);
  // Remove newline from fgets
  boy[strcspn(boy, "\n")] = '\0';

  printf("Name of Girl: ");
  fgets(girl, 50, stdin);
  // Remove newline from fgets
  girl[strcspn(girl, "\n")] = '\0';

  // call function
  int boyCount = getCommonCount(boy, girl, "Boy");
  int girlCount = getCommonCount(girl, boy, "Girl");

  // FLAMES
  int total = boyCount + girlCount;
  int result = total % 6;

  printf("\nTotal Number: %d - ", total);
  switch (result) {
  case 1:
    printf("Frieds\n");
    break;
  case 2:
    printf("Lovers\n");
    break;
  case 3:
    printf("Angry\n");
    break;
  case 4:
    printf("Married\n");
    break;
  case 5:
    printf("Enemies\n");
    break;
  case 0:
    printf("Siblings\n");
    break;
  }

  return 0;
}
