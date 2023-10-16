#include <stdio.h>

int main(){
    char ch[1024];
    char *buf;
    FILE *fp = NULL;
    fp = fopen("textfile.txt", "r");
        if (fp == NULL) printf("Ошибка чтения");
            while(!feof(fp)){
            fgets(ch, sizeof(ch), fp);       
            printf("%s", ch);
    }    
    fclose (fp);
    return 0;
}