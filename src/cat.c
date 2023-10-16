#include <stdio.h>

int main(){
    char ch[1024];
    FILE *fp = NULL;
    fp = fopen("textfile.txt", "r");
        if (fp != NULL){
            fgets(ch, sizeof(ch), fp);
        }
    fclose (fp);
    printf("%s", ch);
    return 0;

}