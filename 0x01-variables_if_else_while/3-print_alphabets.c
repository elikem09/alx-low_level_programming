#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main() {
    char letter;

    for (letter = 'A'; letter <= 'Z'; letter++) {
        putchar(letter);
    }

    for (letter = 'a'; letter <= 'z'; letter++) {
        putchar(letter);
    }

    return 0;
}

