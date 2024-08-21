#include <stdio.h>
// Criação e escrita básica de arquivos
int main(){
    FILE* file;
    file = fopen("ex001.txt", "w");
    char name[100];

    if(file != NULL){
        for(int i=0; i<5; i++){
            scanf("%s", name);
            fprintf(file, name);
            fprintf(file, "\n");
        }
        fclose(file);
        return 1;
    }
    printf("ERRO NO ARQUIVO");
    fclose(file);
    return 0;
}