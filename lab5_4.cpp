
#include <iostream>
using namespace std;

int main()
{
	int x1,x2,x3,y1,y2,y3, ac,bc, P, S;
	setlocale(LC_ALL, "ru");

	cout << "Ведите координаты точки 1: " << endl;
	cin >> x1 >> y1;
	cout << "Ведите координаты точки 2: " << endl;
	cin >> x2 >> y2;
	x3 = x1;
	y3 = y2;
	ac = abs(x2 - x1);
	bc = abs(y2 - y1);


	P = (ac + bc) * 2;
	cout << "Периметр прямоугольника равен:" <<P<< endl;

	S = ac * bc;
	cout << "Площадь прямоугольника равна:" <<S<< endl;
	/*
	cin >> a >> c >> b;
	int ac, bc;
	ac = c - a;
	bc = b - c;
	cout << "Орезок ас равен:" << endl;
	cout << ac << endl;
	cout << "Орезок ас равен:" << endl;
	cout << bc << endl;
	cout << "Произведение отрезков равно :" << ac * bc;
	*/
}
