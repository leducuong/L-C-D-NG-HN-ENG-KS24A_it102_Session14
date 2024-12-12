#include <stdio.h>

int main() {
    char str[1000]; 
    printf("Nhap vao mot chuoi ky tu bat ky: ");
    fgets(str, sizeof(str), stdin); 
    size_t length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        ++length;
    }
    if (str[length] == '\n') {
        str[length] = '\0';
    }
    printf("chuoi vua nhap: %s\n", str);
    printf("do dai cua chuoi: %zu\n", length);

    return 0;
}

