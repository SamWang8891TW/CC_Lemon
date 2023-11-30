#include <stdio.h>
#include "tools.h"

int getCommand() {
    char input;
    printf("Please input a character: ");
    scanf(" %c", &input);  // Use " %c" to skip whitespace characters
    return input;
}

void showCommand(char input) {
    printf("Your input is '%c'.", input);
}

void newline() {
    printf("\n");
}