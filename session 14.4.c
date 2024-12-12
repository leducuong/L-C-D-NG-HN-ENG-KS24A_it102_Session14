#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello World";
    char kyTu;
    int dem = 0;

    printf("Nhap vao mot ky tu bat ky: ");
    scanf(" %c", &kyTu);

    if (kyTu >= 'A' && kyTu <= 'Z') kyTu = kyTu + ('a' - 'A');
    for (int i = 0; chuoi[i] != '\0'; ++i) {
        char hienTai = chuoi[i];
        if (hienTai >= 'A' && hienTai <= 'Z') hienTai = hienTai + ('a' - 'A');
        if (hienTai == kyTu) ++dem;
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", kyTu, dem);

    return 0;
}

