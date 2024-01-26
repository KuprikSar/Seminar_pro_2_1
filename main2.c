#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t N;

    printf("Enter N: ");
    scanf("%u", &N);
    
    unsigned int result = N ^ 0xFF000000;

    printf("\nResult:%u\n", result);

    return 0;
}