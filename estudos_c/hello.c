#include <stdio.h>

int main() {
  changeVarValue(33, 87, 2);

  return 0;
}
              // x = 3 // y = 6  // changes = 5
int changeVarValue(int x, int y, int changes) {
  int aux;
  int i = 0;
  aux = x; // 3

  // x = 6
  x = y;
  // y = 3
  y = aux;
            // changes = 5
  while(i < changes) {
    if(i == 0) {
      printf("initial value of x => %d\ninitial value of y => %d\n", x, y);
      printf("-----------------------------------------------------------\n");
    }

    // x = 3 | aux = 3
    if(y == aux) {
      // y = 3
      y = x;
      // x = 3
      x = aux;

      printf("new value %d of x => %d\nnew value %d of y => %d\n\n", i, x, i, y);
      printf("-----------------------------------------------------------\n");
    }
  // y =
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
