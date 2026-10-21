#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main() {
	setlocale(LC_CTYPE, "RUS");
	task_1();
	task_2();
	homework();
	return 0;
}

int task_1() {
	// 1
	int years;
	puts("введите год:");
	scanf("%d", &years);
	/*if (years % 4 == 0 ) printf("Год %d - високосный\n", years);
	else printf("Год %d - не високосный\n", years);*/

	// 2 
	if ((years % 4 == 0 && years % 100 != 0) || (years % 400 == 0)) {
		printf("Год %d - високосный\n", years);
	}
	else { printf("Год %d - не високосный\n", years); }

	return 0;
	
}
// 9
int task_2() {
	// x = 0.5, f(x) = -0.25; x = 2, f(x) = 4; x = -1, f(x) = 1
	double x, fx, a, b;
	puts("введите значение x:");
	scanf("%lf", &x);
	a = pow(x, 2) - x;
	b = pow(x, 2) - sin(M_PI * pow(x, 2));
	fx = (x >= 0 && x <= 1) ? a : b;
	printf("F(%g) = %g\n", x, fx);
	return 0;
}
// 18
int homework() {
	int N;
	puts("введите знaчение N (N < 1000):");
	scanf("%d", &N);
	if (N < 0) N = -N; // модуль числа для отрицательных чиселок
	if (N < 10) {
		if (N % 3 == 0) printf("Сумма цифр числа %d кратна 3", N);
		else printf("Сумма цифр числа %d не кратна 3", N);
	}
	if (N >= 10 && N < 100) {
		if ( (N % 10 + N / 10) % 3 == 0 ) printf("Сумма цифр числа %d кратна 3", N);
		else printf("Сумма цифр числа %d не кратна 3", N);
	}
	if (N >= 100) {
		if ( (N / 100 + (N / 10) % 10 + N % 10) % 3 == 0 ) printf("Сумма цифр числа %d кратна 3", N);
		else printf("Сумма цифр числа %d не кратна 3", N);
	}
	return 0;
}
