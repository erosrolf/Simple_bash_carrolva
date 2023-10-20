#include "parser.h"

int parser(int argc, char *argv[], char **fname, int *count) {
  if(!fname)
    return 1;
  int return_value = 0;
  int option_index = 0;
  int c = 0;
  char short_options[] = "benst";
  const struct option long_options[] = {{"number-nonblank", 0, NULL, 'b'},
                                        {NULL, 0, NULL, 'e'},
                                        {"number", 0, NULL, 'n'},
                                        {"sqeeze-blank", 0, NULL, 's'},
                                        {NULL, 0, NULL, 't'}};
  while ((c = getopt_long(argc, argv, short_options, long_options,
                          &option_index)) != -1) {
    if (c == 'b')
      printf("flag b\n");
    if (c == 'e')
      printf("flag e\n");
    if (c == 'n')
      printf("flag n\n");
    if (c == 's')
      printf("flag s\n");
    if (c == 't')
      printf("flag t\n");
  }
  *count = argc - optind;
  if(*count > 0){
  fname = (char **)malloc(sizeof(char *) * *count);
  if(!fname) 
    return_value = 1;
  else {
    for(int i = 0; i < *count; i++) {
        fname[i] = argv[optind + i];
      }
    }
  }
  return return_value;
}
