#include <stdio.h>
#include <stdint.h>

int main() {
    unsigned int N;
    uint32_t max, count, num;

    printf("Enter N count numbers: ");
    scanf("%d", &N);
    printf("\nEnter %d numbers: ", N);

    scanf("%d", &max);
    count = 1;

    for (int i = 1; i < N; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
            count = 1;
        } else if (num == max) {
            count++;
        }
    }

    printf("max count: %d\n", count);

    return 0;
}