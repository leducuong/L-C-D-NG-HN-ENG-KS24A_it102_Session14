#include <stdio.h>

int main() {
    char chuoi[100];
    int dem = 0;

    printf("Nhap chuoi cua ban: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    for (int i = 0; chuoi[i] != '\0'; i++) {
        char c = chuoi[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            dem++;
        }
    }

    printf("So luong chu cai trong chuoi la: %d\n", dem);

    return 0;
}

