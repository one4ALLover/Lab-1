#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <limits.h>
#include <time.h>

int main() {

	//			2 «¿ƒ¿Õ»≈

	int mi2 = 0, ma2 = 100, m = 0;
	int b[10] = { 0 };

	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		m = mi2 + rand() % (ma2 - mi2 + 1);
		b[i] = m;
		printf("%d ", b[i]);
	}

	return 0;
}