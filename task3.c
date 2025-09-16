#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	puts("Вариант 7\n");
	int n = 2;
	int L = 353;
	float k = n / L;
	float m = n % L;
	printf("Дано:\n\t\t  %d\n\t\t%d\n\t-----------\n Ответ:\n\t+%2.2d.%4.4d", n, L, k, m);
}
