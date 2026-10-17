#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "solution.h"

int main() {
    assert(total_in_kopecks(5, 30, 2) == 1060);
    printf("Тест 1 пройден\n");

    assert(total_in_kopecks(10, 0, 3) == 3000);
    printf("Тест 2 пройден\n");

    assert(total_in_kopecks(0, 99, 5) == 495);
    printf("Тест 3 пройден\n");

    assert(total_in_kopecks(0, 1, 1) == 1);
    printf("Тест 4 пройден\n");

    printf("\nВсе тесты пройдены успешно!\n");
    return 0;
}