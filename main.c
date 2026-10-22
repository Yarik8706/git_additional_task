#include <stdio.h>
#include "solutions_task2.h"

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", apples_left(n, k));
    return 0;
}
