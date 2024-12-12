#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello World";
    int demTu = 0;
    int trongTu = 0;

    for (int i = 0; chuoi[i] != '\0'; ++i) {
        if (chuoi[i] != ' ') {
            trongTu = 1;
        } else if (trongTu) {
            ++demTu;
            trongTu = 0;
        }
    }
    if (trongTu) ++demTu;

    printf("So tu trong chuoi la: %d\n", demTu);

    return 0;
}

