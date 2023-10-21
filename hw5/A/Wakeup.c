#include <stdio.h>

int main() {
  int input;

  printf("What day is it (0 for Sunday, 1 for Monday, ..., 6 for Saturday): ");
  scanf("%d", &input);

  switch (input) {
  case 0:
    printf("You have to wake up at 10:00.\n");
    break;
  case 1:
    printf("You have to wake up at 7:30.\n");
    break;
  case 2:
    printf("You have to wake up at 8:30.\n");
    break;
  case 3:
    printf("You have to wake up at 8:30.\n");
    break;
  case 4:
    printf("You have to wake up at 7:30.\n");
    break;
  case 5:
    printf("You have to wake up at 8:30.\n");
    break;
  case 6:
    printf("You have to wake up at 10:00.\n");
    break;
  }

  return 0;
}