#include <iostream>
#include <cmath>
#define shengxinyuan 3.14
using namespace std;

void pingyixuanzhuan(double* x, double* y, double a, double b, double theta) {
	double c = *x;
	double d = *y;
	double e, f;
	e = cos(theta) * (*x) - sin(theta) * (*y) - a;
	f = sin(theta) * (*x) + cos(theta) * (*y) - b;
	*x = e;
	*y = f;
}

int main() {
	double a = 10;
	double b = 25;
	double x = 10;
	double y = 10;
	double x1 = 30;
	double y1 = 10;
	double x2 = 20;
	double y2 = 25;
	double theta=shengxinyuan;
	theta = theta / 6;
	pingyixuanzhuan(&x, &y, a, b, theta);
	pingyixuanzhuan(&x1, &y1, a, b, theta);
	pingyixuanzhuan(&x2, &y2, a, b, theta);
	cout << "Point1:(" << x<<","<<y<< ")" << endl;
	cout << "Point2:(" << x1 << "," << y1 << ")" << endl;
	cout << "Point3:(" << x2 << "," << y2 << ")" << endl;
	return 0;
}