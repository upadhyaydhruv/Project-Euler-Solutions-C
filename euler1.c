#include <stdio.h>

int main() {
    int tot = 0;
    for (int i = 0; i < 1000; i++) {
        tot += i*(i%5 == 0 || i%3 == 0);
    }
    printf("%d\n", tot);
}
