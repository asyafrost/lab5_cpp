
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	setlocale(LC_ALL, "ru");
	cout << "Ведите точки a,c,b: " << endl;
	cin >> a >> c >> b;
	double ac, bc;
	ac = c - a;
	bc = b - c;
	cout << "Орезок ас равен:" << endl;
	cout << ac<<endl;
	cout << "Орезок bс равен:" << endl;
	cout << bc << endl;
	cout << "Произведение отрезков равно :"<<ac * bc;

}
