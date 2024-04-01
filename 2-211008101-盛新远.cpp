#include <iostream>
#include <cmath>
#define shengxinyuan 3.14
using namespace std;
void shuzuhanshu(double* x, double* y, double k, double a, double b, double* resultx, double* resulty) {
	double c;
	double d;
	c = atan(k);
	d = shengxinyuan / 2 - c;
	for (int i = 0; i < 3; i++) {
		resultx[i] = cos(d) * x[i] + sin(d) * y[i] + cos(d) * a + sin(d) * b - a;
		resulty[i] = -sin(d) * x[i] + cos(d) * y[i] - sin(d) * a + cos(d) * b - b;
	}
}
int main() {
	double x[3] = { 10, 30, 20 };
	double y[3] = { 10, 10, 25 };
	double a = 0;
	double b = 1;
	double k = 2;
	double resultx[3] = { 0 };
	double resulty[3] = { 0 };
	shuzuhanshu(x, y, k, a, b, resultx, resulty);
	for (int i = 0; i < 3; i++) {
		cout << "P" <<i<<"(" <<resultx[i]<<","<<resulty[i]<<")" << endl;
	}
	return 0;
}