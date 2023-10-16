#include <stdio.h>

int main(int argc, char *argv[]) {
  char ch[1024];
  FILE *fp = NULL;
  fp = fopen("test.txt", "r");
  if (fp == NULL)
    printf("Ошибка чтения");
  while (!feof(fp)) {
    fgets(ch, sizeof(ch), fp);
    printf("%s", ch);
  }
  fclose(fp);
  return 0;
}
