#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello World";
    int length = 0;
    while (str[length] != '\0') ++length;

    printf("Chu?i d?o ngu?c: ");
    for (int i = length - 1; i >= 0; --i) printf("%c", str[i]);
    printf("\n");

    return 0;
}

