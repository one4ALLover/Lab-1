#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <limits.h>
#include <time.h>

int main() {
    //    	---------------4-----------------

    setlocale(LC_ALL, "Russian");

    int mi3 = 0, ma3 = 5;
    int sum_str = 0, sum_sto = 0;
    int strs, tabs, k;
    printf("������� ������ ������� ����� ������): ");
    scanf_s("%d %d", &strs, &tabs);
    int** h = (int**)malloc(strs * sizeof(int*));//������ �������� � �����������, ��� �������� 
    srand(time(NULL));

    for (int i = 0; i < strs; i++) {
        h[i] = (int*)malloc(tabs * sizeof(int));
    } //

    for (int i = 0; i < strs; i++) {
        for (int j = 0; j < tabs; j++) {
            h[i][j] = mi3 + rand() % (ma3 - mi3 + 1);
            printf("%d\t", h[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (int i = 0; i < strs; i++) {
        sum_str = 0;
        for (int j = 0; j < tabs; j++) {
            sum_str += h[i][j];
        }
        printf("����� %d ������: %d\n", i + 1, sum_str);
    }

    printf("\n");
    for (int j = 0; j < tabs; j++) {
        sum_sto = 0;
        for (int i = 0; i < strs; i++) {
            sum_sto += h[i][j];
        }
        printf("����� %d �������: %d\n", j + 1, sum_sto);
    }

    int sum_task = 0;
    printf("\n");
    for (int i = 0; i < strs - 1; ++i)
    {
        for (int j = i + 1; j < tabs; ++j)
        {
            if (h[i][j] % 2==0) {
                sum_task += *(*(h + i) + j);
            }
        }
    }
    printf("����� ��������� ���� ������� ���������: %d\n", sum_task);
    return 0;
}
//�������: � ���������� ����� ������� ��������� ����� ��-�� ������� ���� ���� ������� ���������