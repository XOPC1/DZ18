//������������ ������ ������� �++
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

inline int midorfeed(int a, int b) {
	return (a + b) / 2;
}
int maximabombarda(int n1, int n2, int n3) {
	int max = n1;
	if (n1 < n2)
		max = n2;
	if (n2 < n3)
		max = n3;
	return max;
}
float maximabombarda(float n1, float n2, float n3) {
	float max = n1;
	if (n1 < n2)
		max = n2;
	if (n2 < n3)
		max = n3;
	return max;
}
double maximabombarda(double n1, double n2, double n3) {
	double max = n1;
	if (n1 < n2)
		max = n2;
	if (n2 < n3)
		max = n3;
	return max;
}
template <typename T> T hardhardbass(T arr[], int l) {
	T max = arr[0];
	for (int i = 0; i < l; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}


int main() {
	int n, m;
	setlocale(LC_ALL, "Russian");
	/*������ 1
�������� �c���������� �������, ������� ���������
��� ����� � ���������� �� ������� ��������������.*/

	cout << "������� ��� �����: ";
	cin >> n >> m;
	cout << "������� �������������� �����:" << midorfeed(n, m) << "\n\n";

	/*������ 2
���������� ������������� ������� ��� ����������
������������� �� ��� ���������. ������� ������
������������ ���� int, float � double.*/

	cout << maximabombarda(542, 12, 1717) << "\n\n";

	/*������ 3
�������� ��������� ������� ��� ����������
������������� �������� �������. ������� ������
�������� � ����� ����� ������.*/

	float karramba[11] = { 2.34,5,0,6.111,-40,0.2341,31,4.11,-43.02,32,30.11 };
	cout << "������ ������a:[";
	for (int i = 0; i < 11; i++)
		cout << karramba[i] << ", ";
	cout << "\b\b]\n";
	cout << "��������������� ���������� �������: " << hardhardbass(karramba, 11);
	return 0;
}