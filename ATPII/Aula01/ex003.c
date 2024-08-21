#include <stdio.h>

int main(){
    FILE *file;
    file = fopen("ex001.txt", "r");
    char names[100];
    int i=0;

    if(file != NULL){
        while(fgets(names, 100, file)){
            i++;
        }
        printf("O numero de linhas eh de: %d", i);
        fclose(file);
        return 1;
    }
    printf("ERRO NO ARQUIVO");
    return 0;
}