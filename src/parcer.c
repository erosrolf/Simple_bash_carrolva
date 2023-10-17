#include <stdio.h>
#include <getopt.h>

int parce (int argc, char *argv[]) {
    int return_value = 0;
    int option_index = 0;
    int c = 0;
    char short_options[] = "benst";
    const struct option long_options[] =
    {
        {"number-nonblank", 0, NULL, 'b'},
        {NULL, 0, NULL, 'e'},
        {"number", 0, NULL, 'n'},
        {"sqeeze-blank", 0, NULL, 's'},
        {NULL, 0, NULL, 't'}
    };
    while ((c = getopt_long(argc, argv, short_options, long_options, &option_index)) != -1)
    {
        if(c == 'b') printf("flag b\n");
        if(c == 'e') printf("flag e\n");
        if(c == 'n') printf("flag n\n");
        if(c == 's') printf("flag s\n");
        if(c == 't') printf("flag t\n");
    }
    if(optind < argc){
        while (optind < argc)

        {
            printf("%s\n", argv[optind++]);
        }
        
    }
    return return_value;
}

int main(int argc, char *argv[]){
    parce(argc, argv);
    return 0;
}