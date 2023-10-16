#include <getopt.h>
#include <stdio.h>

int main(int argc, char **argv) {
  int c = 0; // перебирающий аргументы счетчик
  int option_index = 0;
  char short_options[] = "abc";
  int flag_b = 0;
  const struct option long_options[] = {
      // если 3 аргумент = NULL, функция getopt_long вернет 'a'.
      // так же в 3 аргументе можно передать указатель на int, тогда в него
      // запишутся данные из 4 аргумента, если опция будет длинная
      // (например --break)
      {"add", no_argument, NULL, 'a'},
      {"break", no_argument, &flag_b, 100},
      {"create", 1, NULL, 'c'},
      {NULL, 0, NULL, 0}};
  // функция getopt_long возвращает разный результат в зависимости от считанного
  // параметра если параметры закончались, функция вернет -1, по-этому делаем
  // цикл до тех пор, пока не вернется -1
  // если параметр совпадает с одним из short_options, то возвращает именно его
  // по-этому мы можем сравнивать (c == 'short_options') как написанно ниже
  // если совпадения не найдены, функция вернет номер вопросительного знака из
  // таблицы ascii
  while ((c = getopt_long(argc, argv, short_options, long_options,
                          &option_index)) != -1) {
    if (c == 'a')
      printf("option -a\n");
    if (c == 'b')
      printf("option -b\tflag_b = %d\n", flag_b); //
    printf("%d\n", c);
  }
  printf("flag_b = %d\n", flag_b);
  return 0;
}

// задание №1
// добавь обработку флага --create / -c при котором в коталоге с программой
// создаствя текстовый документ test.txt, если его еще нет.
//
// задание №2
// создай в своей ветке отдельный си файл parse.c в котором напиши функцию void
// parse(int argc, char **argv); внутри этой функции напиши такую структуру
// const struct option long_options под флаги из задания cat
