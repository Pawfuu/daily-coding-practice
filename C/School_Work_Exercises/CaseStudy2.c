#include <conio.h>
#include <stdio.h>

int main() {

  char password[50];
  int i = 0;
  char ch;

  printf("Enter Password: ");
  fflush(stdout); // This forces the prompt to appear immediately
  while (1) {
    ch = getch();
    if (ch == 13) // ASCII CODE FOR ENTER
    {
      break;
    } else if (ch == 8 && i > 0) // ASCII FOR BACKSPACE
    {
      i--;
      printf("\b \b");
    } else {
      password[i] = ch; // save the character
      i++;
      printf("*");
    }
  }

  password[i] = '\0'; // remembers the null terminator
  printf("\nPassword has been saved.");

  return 0;
}
