#include <stdio.h>

int main() {

  // entries for exemplification:
  changeVarValue(33, 87, 2);

  return 0;
}

int changeVarValue(int x, int y, int changes) {
  int aux;
  int i = 0;
  aux = x;

  x = y;
  y = aux;

  while(i < changes) {
    if(i == 0) {
      printf("initial value of x => %d\ninitial value of y => %d\n", x, y);
      printf("-----------------------------------------------------------\n");
    }

    if(y == aux) {
      y = x;
      x = aux;

      printf("new value %d of x => %d\nnew value %d of y => %d\n\n", i, x, i, y);
      printf("-----------------------------------------------------------\n");
    }

    if(x == aux) {
      x = y;
      y = aux;
      printf("new value %d of x => %d\nnew value %d of y => %d\n\n", i, x, i, y);
      printf("-----------------------------------------------------------\n");
    }
    i++;
  }

  return;

}
