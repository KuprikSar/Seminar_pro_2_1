#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t N;
    scanf("%d ", &N);

    char c;
    while ((c = getchar()) != '.') { //читаем до точки
        if (c >= 'a' && c <= 'z') {
            c = 'a' + (c - 'a' + N) % 26;
        } else if (c >= 'A' && c <= 'Z') {
            c = 'A' + (c - 'A' + N) % 26;
        }
        putchar(c);
    }
    
    printf(".\n");

    return 0;
}