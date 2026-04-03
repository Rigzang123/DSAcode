#include <stdio.h>
int main() {
    int count = 0;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 3; j++) {
            count++;
        }
    }
printf("Final count = %d\n", count);
    return 0;
}
