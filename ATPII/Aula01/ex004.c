#include <stdio.h>

int main(){
    FILE *original;
    original = fopen("original.txt", "r");
    FILE *copy;
    copy = fopen("copy.txt", "w");
    char text[100];

    if(original != NULL){
        while(fgets(text, 100, original)){
            fprintf(copy, text);
        }
        fclose(original);
        fclose(copy);
        return 1;
    }
    printf("ARQUIVO VAZIO!");
    return 0;
}