#include <stdio.h>
#include <locale.h>
int main() {

	setlocale(LC_ALL, "RUS");
	int N = 11;
	int K = 48;
	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", N * 60 + K);
	printf("�� �������� �������� %d ����� � %d �����\n", 24 - N - 1, 60 - K);
	printf("� 8.00 ������ %d ������\n", (N - 8) * 60 * 60 + K * 60);
	float F = 11, H = 48;
	printf("������� ��� = %f ����� � ������� ������ = %f ����\n", F / 24, H / 60);


}