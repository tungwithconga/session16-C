#include<stdio.h>
int main(){
    FILE *file = NULL;
    char Content[1000];
    file = fopen("C:\\Users\\ching\\M�y t�nh\\file\\bt01.txt", "r");
    fread(Content , sizeof(char), sizeof(Content),file);
    printf("%s",Content);
    fclose(file);
    return 0;
}
