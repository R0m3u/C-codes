#include <stdio.h>


int decToBin(int k) {
    int result;

    result = k;

    while(result != 0) {
        printf("%d", result % 2);
        result = result / 2;
    }
}

int main() {
    int x;

    printf("input: ");
    scanf("%d", &x);

    decToBin(x);

    return 0;
}
