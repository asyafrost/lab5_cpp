
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	setlocale(LC_ALL, "ru");
	cout << "Ведите точки a,b,c: " << endl;
	cin >> a >> b >> c;
	double ac, bc;
	ac = b - a;
	bc = c - b;
	cout << "Орезок аb равен:" << endl;
	cout << ac << endl;
	cout << "Орезок bс равен:" << endl;
	cout << bc << endl;
	cout << "Сумма отрезков равна :" << ac + bc;

}
