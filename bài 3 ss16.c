#include<stdio.h>
int main(){
    FILE *file = NULL;
    int count;
    char content[1000];
    file = fopen("C:\\Users\\ching\\Máy tính\\bt01.txt","w");
    if(file == NULL){
        printf("khong mo duoc file.\n");
        return 1;
    }
    printf("nhap so dong cua noi dung: ");
    scanf("%d",&count);
    for(int i = 0; i < count;i++){
        printf("Nh?p noi dung dong %d: ",i+1);
        fflush(stdin);
        fgets(content, sizeof(content), stdin);
        fprintf(file, "noi dung dong %d :%s", i+1, content);
    }
    fclose(file);
    printf("Chuoi da duocc ghi vào file bt01.txt.\n");
    return 0;
}

