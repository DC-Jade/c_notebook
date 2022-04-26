#include <stdio.h>
#include <math.h>

void ShowLocalVar() {
  int i;
  printf("i without assigment = %d\n", i);
  i = 777;
  printf("i after assigment = %d\n", i);
}

int IsEven(int x) {
  if (x % 2 == 0)
    return 1;
  else
    return 0;
}

int IsEvenPro(int x) {
  return x % 2 == 0;
}

int main() {
  double pi = 3.1415926;
  int a = 3;
  printf("sin(pi / 2) = %f\nln(1) = %f\n", sin(pi / 2), log(1.0));
  ShowLocalVar();
  printf("\n");
  ShowLocalVar();
  ShowLocalVar();
  ShowLocalVar();
  IsEven(a) ? printf("%d is even\n", a) : printf("%d is not even\n", a);
  IsEvenPro(a) ? printf("%d is even\n", a) 
               : printf("%d is not even\n", a);
  return 0;
}
