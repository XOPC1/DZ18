//Персональный шаблон проекта С++
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
	/*Задача 1
Создайте вcтраиваемую функцию, которая принимает
два числа и возвращает их среднее арифметическое.*/

	cout << "Введите два числа: ";
	cin >> n >> m;
	cout << "Среднее арифметическое чисел:" << midorfeed(n, m) << "\n\n";

	/*Задача 2
Реализуйте перегруженную функцию для нахождения
максимального из трёх элементов. Функция должна
поддерживать типы int, float и double.*/

	cout << maximabombarda(542, 12, 1717) << "\n\n";

	/*Задача 3
Напишите шаблонную функцию для нахождения
максимального элемента массива. Функция должна
работать с любым типом данных.*/

	float karramba[11] = { 2.34,5,0,6.111,-40,0.2341,31,4.11,-43.02,32,30.11 };
	cout << "Массив карамбa:[";
	for (int i = 0; i < 11; i++)
		cout << karramba[i] << ", ";
	cout << "\b\b]\n";
	cout << "Максимальнейший элементище массива: " << hardhardbass(karramba, 11);
	return 0;
}