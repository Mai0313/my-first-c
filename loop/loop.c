#include <stdio.h>
#include <time.h>

int main() {
    int j = 0;
    clock_t start, finish;
    start = clock();
    for (int i = 0; i < 20000000; i++) {
        j++;
    }
    finish = clock() - start;
    double elapsed_time = ((double)finish) / CLOCKS_PER_SEC;
    printf("%.3fms\n", elapsed_time * 1000);
    return 0;
}
