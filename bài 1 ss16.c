#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char array[1000];


    file = fopen("bt01.txt", "w");

    if (file == NULL) {
        printf("Khong the mo tap tin.");
        return 1;
    }

    printf("Nhap chuoi de ghi vao file bt01.txt: ");
    fgets(array, sizeof(array), stdin);


    fprintf(file, "%s", array);


    fclose(file);

    printf("Chuoi da duoc ghi vao tap tin bt01.txt.\n");

    return 0;
}

