#include "parser.h"

int main(int argc, char *argv[]) {
    char **fname = NULL;
    int fcount = 0;
    int first_fname = 0;
    parser(argc, argv, &first_fname);
    fcount = argc - first_fname;
    if(fcount > 0){
        fname = (char **)malloc(sizeof(char *) * fcount);
    if(!fname)
        exit(1);
        printf("f = %d\n", first_fname);
    for(int i = 0; i < fcount; i++){
        printf("i = %d\n", i);
        fname[i] = argv[i + first_fname];
        printf("%s\n", fname[i]);
    }
  }
    return 0;
}