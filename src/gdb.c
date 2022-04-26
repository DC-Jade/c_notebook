#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int klen = 10;

int add_range(int low, int high) {
  int i, sum;
//   int i, sum = 0;
  for (i = low; i <= high; ++i)
    sum += i;
  return sum;
}

void test1() {
  int result[100];
  result[0] = add_range(1, 10);
  result[1] = add_range(1, 100);
  printf("result[0] = %d\nresult[1] = %d\n", result[0], result[1]);
}

/*
 * tanslate int string into integer
 */
void test2() {
  int sum, i = 0;
  char input[5];

  while (1) {
    sum = 0;
    scanf("%s", input);
    for (i = 0; input[i] != '\0'; i++)
      sum = sum * 10 + input[i] - '0';
    printf("input=%d\n", sum);
  }
}

/*
 * revese string
 */
void test3() {
  int i;
  int len = 5;
  char *str = malloc(klen * sizeof(char));
  char *rev_str = malloc(klen * sizeof(char));
  strcpy(str, "hello");
  printf("str: %s\n", str);

  /* reverse */
  for (i = 0; i < len; ++i) {
    rev_str[len - i - 1] = str[i];
  } 
  printf("rev_str: %s\n", rev_str);

  free(str);
  free(rev_str);
}

void test4() {
  int man = 0;
  scanf("%d", &man);
}

int main() {
//   test1();
//   test2();
//   test3();
  test4();
}
