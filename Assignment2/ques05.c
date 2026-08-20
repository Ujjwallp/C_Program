#include <stdio.h>

int main() {
  int date, day, month, year;

  while (1) {
    printf("Enter date (DDMMYYYY): ");
    scanf("%d", &date);

    day = date / 1000000;
    month = (date / 10000) % 100;
    year = date % 10000;

    if (month < 1 || month > 12 || day < 1 || day > 31) {
      printf("Invalid date. Try again.\n");
      continue;
    }

    break;
  }

  printf("%02d-", day);

  if (month == 1)
  printf("January");
  else if (month == 2)
  printf("February");
  else if (month == 3)
  printf("March");
  else if (month == 4)
  printf("April");
  else if (month == 5)
  printf("May");
  else if (month == 6)
  printf("June");
  else if (month == 7)
  printf("July");
  else if (month == 8)
  printf("August");
  else if (month == 9)
  printf("September");
  else if (month == 10)
  printf("October");
  else if (month == 11)
  printf("November");
  else
  printf("December");

  printf("-%04d\n", year);

  return 0;
}