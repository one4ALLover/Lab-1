#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>

int main() {
    //			1 «¿ƒ¿Õ»≈

    int mi = INT_MAX, ma = INT_MIN;
    int a[10] = { 0 };

    for (int i = 0; i < 10; i++) {
        a[i] = i;
        printf("%d ", a[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (a[i] < mi) { mi = a[i]; };
        if (a[i] > ma) { ma = a[i]; };
    }

    printf("\n%d", ma - mi);

    return 0;
}