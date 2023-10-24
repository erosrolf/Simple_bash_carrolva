#include "parser.h"

// нужно создать структуру flag и в цикле while добавлять структуру
int parser(int argc, char *argv[], int *first_fname) {
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
  *first_fname = optind;
  return return_value;
}

// нужно доработать в функцию сортировки структур flag
int main() {
  int flags_len = 0;
  int flag_c = 4;
  char *flags = malloc(10);
  struct flag {
    char data;
    int rang;
  };

  double arr[] = {1, 2, 3, 4, 5};

  struct flag tmp[5];
  tmp[0].data = 'b', tmp[0].rang = 0;
  tmp[1].data = 'e', tmp[1].rang = 3;
  tmp[2].data = 'n', tmp[2].rang = 2;
  tmp[3].data = 's', tmp[3].rang = 1;
  tmp[4].data = 't', tmp[4].rang = 4;
  for (int i = 0; i <= 4; i++) {
    for (int j = 0; j < flag_c; j++) {
      if (tmp[j].rang == i) {
        // printf("%c ", tmp[j].data);
        flags[i] = tmp[j].data;
        flags_len++;
      }
    }
  }
  flags[flags_len] = 0x00;
  printf("arr size = %ld\n", sizeof(arr));
  printf("struct size = %ld\n", sizeof(double));
  // printf("%s\n", flags);
  return 0;
}
