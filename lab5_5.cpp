// lab5_5.cpp : Этот файл содер
#include <iostream>
using namespace std;

int main()
{
	int x1, x2, x3, y1, y2, y3, ac, bc, ab, P, S;
	setlocale(LC_ALL, "ru");

	cout << "Ведите координаты точки 1: " << endl;
	cin >> x1 >> y1;
	cout << "Ведите координаты точки 2: " << endl;
	cin >> x2 >> y2;
	cout << "Ведите координаты точки 3: " << endl;
	cin >> x3 >> y3;

	ac = ((x2 - x1) ^ 2 + (y2 - y1) ^ 2);
	bc = ((x3 - x2) ^ 2 + (y3 - y2) ^ 2);
	ab = ((x3 - x1) ^ 2 + (y3 - y1) ^ 2);


	P = ac + bc + ab;
	cout << "Периметр треугольника равен:" << P << endl;
	P = P / 2;
	S = sqrt(P*(P - ac) * (P - ab) * (P - bc));
	cout << "Площадь треугольника равна:" << S << endl;

	return 0;
}