#include "parser.h"

int main(int argc, char *argv[]) {
    char **fname = NULL;
    int fcount = 0;
    parser(argc, argv, fname, &fcount);
    printf("%d\n", fcount);
    for(int i = 0; i < fcount; i++)
        printf("%s\n", fname[i]);
    return 0;
}