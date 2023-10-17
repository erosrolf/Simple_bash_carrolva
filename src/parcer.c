#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parce(int argc, char *argv[]) {
  int return_value = 0;
  int option_index = 0;
  int c = 0, fcount = 0;
  char **fname = NULL;
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
  fcount = argc - optind;
  fname = (char **)malloc(sizeof(char *) * fcount);
  fname[0] = argv[optind];
  fname[1] = argv[optind + 1];
  printf("%s\n", fname[0]);
  printf("%s\n", fname[1]);
  // if (optind < argc) {
  //   while (optind < argc)
  //
  //   {
  //     printf("%s\n", argv[optind++]);
  //   }
  // }
  return return_value;
}

int is_num(char *ch) {
  int i = 0;
  while (ch[i] != 0x00) {
    printf("i = %d\n", i);
    i++;
  }

  return ch[0] == '0' || ch[0] == '1';
}

int main(int argc, char *argv[]) {
  char *str = malloc(100);
  sscanf("ab10", "%s", str);
  printf("str = %s\n", str);

  char ch = '0';
  printf("res = %d\n", is_num(str));
  // parce(argc, argv);
  return 0;
}
