#include <stdio.h>

int main() {
  char s_letter, n_letter;
  printf("Enter first letter: ");
  scanf(" %c", &s_letter);

  while (1) {
    printf("Enter next letter: ");
    scanf(" %c", &n_letter);

    if (n_letter < s_letter) {
      printf("Letters are not in alphabetical order.\n");
      return 0;
    }

    if (n_letter == ' ')
    break;

    s_letter = n_letter;
  }

  printf("Letters are in alphabetical order.\n");
  return 0;
}