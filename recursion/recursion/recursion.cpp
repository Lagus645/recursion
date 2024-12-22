#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
int n,x;

double f(int n, double x) {
	if (n == 0) return x;
	if (n == 1) return (pow(x, 5)/5) + f(n - 1, x);
	return ((pow(x, 4*n+1)) / (4*n+1)) + f(n - 1, x);
}

int main() {
	setlocale(LC_ALL, "russian");
	cout << "Введите n: ";
	cin >> n;
	cout << "Введите x: ";
	cin >> x;
	while (n < 0) {
		cout << "Введите положительное n: ";
		cin >> n;
	}
	cout << "Результат: " << f(n, x);
	return 0;
}