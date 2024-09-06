#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <limits.h>
#include <time.h>

int main() {
    //			4 ЗАДАНИЕ

    int mi3 = 0, ma3 = 5;
    int sum_str = 0, sum_sto = 0;
    int n, m;
    printf("Введите размер массива (r c): ");
    scanf_s("%d %d", &n, &m);
    int** h = (int**)malloc(n * sizeof(int*));
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        h[i] = (int*)malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            h[i][j] = mi3 + rand() % (ma3 - mi3 + 1);
            printf("%d\t", h[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        sum_str = 0;
        sum_sto = 0;
        for (int j = 0; j < 3; j++) {
            sum_str += h[i][j];
            sum_sto += h[j][i];
        }
        printf("Сумма %d строки и столбца: %d / %d\n", i + 1, sum_str, sum_sto);
    }

    return 0;
}