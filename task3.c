#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	puts("������� 7\n");
	int n = 2;
	int L = 353;
	float k = n / L;
	float m = n % L;
	printf("����:\n\t %d\n\t%d\n       -----------\n �����:\n\t+%2.2d.%4.4d", n, L, k, m);
}