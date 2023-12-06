#include <stdio.h>
int main(){
    FILE *file = NULL;
    char outputString[1000];
    file = fopen("C:\\Users\\ching\\Máy tính\\file bt01.txt", "r");
    fread(outputString, sizeof(char),sizeof(outputString),file);
    printf("du lieu trong tep tin la: %s",outputString);
    fclose(file);
    return 0;
}

