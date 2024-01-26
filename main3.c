#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t N;
    scanf("%d", &N);
    
    int result = 0;
    
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        result ^= num; //XOR
    }

    printf("Result: %d\n", result);

    return 0;
}