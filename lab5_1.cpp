#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int x1, x2, y1, y2;
	float z;

	cout << "Введите координаты точки 1"<<endl;
	cin >> x1 >> y1;

	cout << "Введите координаты точки 2"<<endl;
	cin >> x2 >> y2;

	z = sqrt((x2 - x1) ^ 2 + (y2 - y1 )^ 2);

	cout << "Длина расстояния между координатными точками равна:"<< z;
	return 0;
}