#include <stdio.h>

int main(){
    FILE *file;
    file = fopen("ex001.txt", "r");
    char names[100];

    if(file != NULL){
        while(fgets(names, 100, file)){
            printf("%s", names);
        }

        fclose(file);
        return 1;
    }
    printf("ERRRO NO ARQUIVO");
    return 0;
}