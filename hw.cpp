#include <iostream>

using namespace std;

struct Point {
	double x = 0;
	double y = 0;

	void setpoint(double X, double Y) {
		x = X;
		y = Y;
	}

	void pointPrint() {
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
	}
};

int main() {
	double x = 0, y = 0;
	cout << "Введите x" << endl;
	cin >> x;
	cout << "Введите y" << endl;
	cin >> y;

	Point point;
	point.setpoint(x, y);
	point.pointPrint();

	return 0;
}
