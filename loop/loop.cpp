#include <iostream>
#include <ctime>

int main() {
    int j = 0;
    clock_t start, finish;
    start = clock();
    for (int i = 0; i < 20000000; i++) {
        j++;
    }
    finish = clock() - start;
    double elapsed_time = ((double)finish) / CLOCKS_PER_SEC;
    std::cout << elapsed_time * 1000 << "ms" << std::endl;
    return 0;
}
