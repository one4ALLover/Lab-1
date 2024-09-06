#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <limits.h>
#include <time.h>

#define NAME 15
#define MAX_S 50

struct student {
    char Name[NAME];
    char Name2[NAME];
    int Age, Nomzach;
}students[MAX_S];

void searchByName(struct student students[], int c, const char* Name, const char* Name2) {
    int found = 0;
    for (int i = 0; i < c; i++) {
        if (strcmp(students[i].Name, Name) == 0 && strcmp(students[i].Name2, Name2) == 0) {
            printf("Ваш студент: %s %s. Его возраст: %d. Номер зачетки: %d\n", students[i].Name, students[i].Name2, students[i].Age, students[i].Nomzach);
            found = 1;
        }
    }
    if (!found) {
        printf("Такого студента нет :/\n");
    }
}

void searchByAge(struct student students[], int c, int age) {
    int found = 0;
    for (int i = 0; i < c; i++) {
        if (students[i].Age == age) {
            printf("Ваш студент: %s %s. Его возраст: %d. Номер зачетки: %d\n", students[i].Name, students[i].Name2, students[i].Age, students[i].Nomzach);
            found = 1;
        }
    }
    if (!found) {
        printf("Студента с таким возрастом нет :/\n");
    }
}

void searchByNomzach(struct student students[], int c, int Nomzach) {
    int found = 0;
    for (int i = 0; i < c; i++) {
        if (students[i].Nomzach == Nomzach) {
            printf("Ваш студент: %s %s. Его возраст: %d. Номер зачетки: %d\n", students[i].Name, students[i].Name2, students[i].Age, students[i].Nomzach);
            found = 1;
        }
    }
    if (!found) {
        printf("Студента с таким возрастом нет :/\n");
    }
}

int main() {

    setlocale(LC_ALL, "Russian");

    int c = 0;

    printf("Количество студентов: ");
    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
        printf("Имя студента %d: ", i + 1);
        scanf("%s", students[i].Name);
        printf("Фамилия студента %d: ", i + 1);
        scanf("%s", students[i].Name2);
        printf("Возраст студента %d: ", i + 1);
        scanf("%d", &students[i].Age);
        printf("Ночер зачетки студента %d: ", i + 1);
        scanf("%d", &students[i].Nomzach);
    }

    int choice;
    do {
        printf("\nВыберите метод поиска:\n");
        printf("1. Поиск по имени и фамилии\n");
        printf("2. Поиск по возрасту\n");
        printf("3. Поиск по номеру зачетки\n");
        printf("4. Выход\n");
        printf("Ваш выбор: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            char search1[NAME];
            char search2[NAME];
            printf("Введите имя для поиска: ");
            scanf("%s", search1);
            printf("Введите фамилию для поиска: ");
            scanf("%s", search2);
            searchByName(students, c, search1, search2);
            break;
        }
        case 2: {
            int searchAge;
            printf("Введите возраст для поиска: ");
            scanf("%d", &searchAge);
            searchByAge(students, c, searchAge);
            break;
        }
        case 3: {
            int searchNomzach;
            printf("Введите номер зачетки для поиска: ");
            scanf("%d", &searchNomzach);
            searchByNomzach(students, c, searchNomzach);
            break;
        }
        case 4:
            printf("Выход из программы.\n");
            break;
        default:
            printf("Неверный выбор. Попробуйте снова.\n");
        }
    } while (choice != 4);

    return 0;
}