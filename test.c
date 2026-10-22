#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "solutions_task2.h"

int main(void) {
    assert(apples_left(3, 10) == 1);
    printf("Тест 1 пройден\n");

    assert(apples_left(5, 12) == 2);
    printf("Тест 2 пройден\n");

    assert(apples_left(1, 7) == 0);
    printf("Тест 3 пройден\n");

    assert(apples_left(7, 7) == 0);
    printf("Тест 4 пройден\n");

    assert(apples_left(5, 3) == 3);
    printf("Тест 5 пройден\n");

    assert(apples_left(4, 10) == 2);
    printf("Тест 6 пройден\n");

    assert(apples_left(10000, 10000) == 0);
    printf("Тест 7 пройден\n");

    printf("\nВсе тесты пройдены успешно!\n");
    return 0;
}
