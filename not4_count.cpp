#include <stdio.h>

int main() {
    for (int i = 1; i <= 50; ++i) {
        if (i % 4 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

