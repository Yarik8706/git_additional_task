#include <assert.h>
#include <stdio.h>

#include "lab1.h"

int main(void) {
    assert(full_kilometers(1) == 0);
    assert(full_kilometers(999) == 0);
    assert(full_kilometers(1000) == 1);
    assert(full_kilometers(2305) == 2);

    puts("Все тесты задачи 3 пройдены.");
    return 0;
}
