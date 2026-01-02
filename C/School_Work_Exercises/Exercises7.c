#include <ctype.h>
#include <stdio.h>
#include <string.h>

void isCommonPrefix(char str1[], char str2[]) {
  printf("Common Prefix: ");
  for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
    if (str1[i] == str2[i]) {
      printf("%c", str1[i]);
    } else {
      break;
    }
  }
}

int isPalindrome(char str[]) {
  int start = 0;
  int end = strlen(str) - 1;

  while (start < end) {
    if (str[start] != str[end]) {
      return 0; // Not a Palindrome
    }
    start++;
    end--;
  }
  return 1;
}

int main() {

  // PROGRAMMING EXERCISES 7-1
  // printf("%d\n", isPalindrome("ABCBA"));
  // printf("%d", isPalindrome("hello"));
  // printf("\n");

  // PROGRAMMING EXERCISES 7-2
  // char words[100];
  // int counts[21] = {0}; // records word count
  // int current_len = 0;
  //
  // printf("Enter text: ");
  // fgets(words, 100, stdin);
  //
  // // Counter
  // for (int i = 0; words[i] != '\0'; i++) {
  //   //  detect alphabet count letters only
  //   if (isalpha((unsigned char)words[i])) {
  //     current_len++;
  //   } else if (isspace((unsigned char)words[i])) {
  //     if (current_len > 0) {
  //       counts[current_len]++; // assign a counter and records in list
  //       current_len = 0;       // reset counter
  //     }
  //   }
  // }
  //
  // // To catch last word
  // if (current_len > 0) {
  //   counts[current_len]++;
  // }
  //
  // // Print Output
  // int totalWords = 0;
  // printf("\nResults:\n");
  // for (int i = 1; i < 21; i++) {
  //   if (counts[i] > 0) {
  //     printf("%d-letter words: %d\n", i, counts[i]);
  //     totalWords += counts[i];
  //   }
  // }
  // printf("Total words: %d\n", totalWords);

  // PROGRAMMING EXERCISES 7-3
  // Write and test a function that finds the longest common prefix of two
  // words(e.g. the longest common prefix of “global” and “glossary” is “glo”,
  // of “department” and “depart” is “depart”, and of “glove” and “dove” is the
  // empty string);
  //
  // char word1[] = "department";
  // char word2[] = "depart";
  //
  // // This is the easiest and most standard way
  // printf("Word 1: %s\n", word1);
  // printf("Word 2: %s\n", word2);
  //
  // printf("\n");
  //
  // isCommonPrefix(word1, word2);
  // printf("\n");

  // PROGRAMMING EXERCISES 7-4
  char str[100];

  printf("Input text: ");
  fgets(str, 100, stdin);

  int current_len = 0;

  for (int i = 0; i <= strlen(str); i++) {
    if (!isspace((unsigned char)str[i]) && str[i] != '\0') {
      current_len++;
    } else {
      if (current_len == 4) {
        int start_index = i - current_len;

        // replace wrods with *
        for (int j = start_index; j < i; j++) {
          str[j] = '*';
        }
      }
      current_len = 0; // resets for next word
    }
  }

  printf("Results: %s\n", str);

  // PROGRAMMING EXERCISES 7-5
  // char str[100];
  //
  // printf("Enter a noun: ");
  // scanf("%s", str);
  //
  // int length = strlen(str);
  // int end = length - 1;
  //
  // if (str[end] == 'y') {
  //   if (str[end - 1] == 'a' || str[end - 1] == 'e' || str[end - 1] == 'i' ||
  //       str[end - 1] == 'o' || str[end - 1] == 'u') {
  //     str[length] = 's';
  //     str[length + 1] = '\0';
  //   } else {
  //     // If Consonant + y
  //     str[end] = 'i';
  //     str[end + 1] = 'e';
  //     str[end + 2] = 's';
  //     str[end + 3] = '\0';
  //   }
  // } else if (str[end] == 's' ||
  //            str[end] == 'h' && (str[end - 1] == 's' || str[end - 1] == 'c'))
  //            {
  //   str[length] = 'e';
  //   str[length + 1] = 's';
  //   str[length + 2] = '\0';
  // } else {
  //   str[length] = 's';
  //   str[length + 1] = '\0';
  // }
  //
  // printf("\nPlural Form: %s\n", str);
  //
  //
  // CASE STUDY 1
  // char boy[50], girl[50];
  // int length_boy = strlen(boy);
  // int length_girl = strlen(boy);
  //
  // printf("Name of Boy: ");
  // for (int i = 0; i < length_boy; i++) {
  //   scanf("%s", &boy[50]);
  // }
  // printf("\nName of Girl:");
  // for (int i = 0; i < length_girl; i++) {
  //   scanf("%s", &girl[50]);
  // }
  // // count common letters
  // int count;
  // for (int i = 0; length_boy; i++) {
  //   if (boy[i] == boy[i + 1]) {
  //   }
  // }
  // // printf("\nThe unique elements are: \n");
  // int count;
  // for (int i = 0; i < sizeofArr; i++) {
  //   count = 0; // reset the counter
  //   for (int j = 0; j < sizeofArr; j++) { // full scan
  //     if (i != j) {
  //       if (arr[i] == arr[j]) {
  //         count++;
  //       }
  //     }
  //   }
  //   if (count == 0) {
  //     printf("%d ", arr[i]);
  //   }
  // }
  return 0;
}
