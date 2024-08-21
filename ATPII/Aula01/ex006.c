#include <stdio.h>

int main(){
    FILE *file1;
    file1 = fopen("ex001.txt", "r");
    FILE *file2;
    file2 = fopen("ex005.txt", "r");
    FILE *file3;
    file3 = fopen("ex006.txt", "w");
    char text[100];

    if(file1!=NULL && file2!=NULL){
        while(fgets(text, 100, file1)){
            fprintf(file3, text);
        }
        while(fgets(text, 100, file2)){
            fprintf(file3, text);
        }
        fclose(file1);
        fclose(file2);
        fclose(file3);
        return 1;
    }
    printf("UM OU MAIS ARQUIVOS ESTÃO VAZIOS");
    return 0;
}