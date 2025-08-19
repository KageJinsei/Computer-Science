#include <stdio.h>

int main() {

    for (int i = 0; i < 200; i++) {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
    }
}