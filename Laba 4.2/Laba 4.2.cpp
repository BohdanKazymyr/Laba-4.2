// Lab_4.2.cpp
// < Казимир Б.П >
// Лабораторна робота № 4.2
// Варіант 10

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = 4.95 * x * x;
		if (x < (-3.5))
			B = 4 + (1 / x) * (1 / x);
		else
			if ((-3.5) <= x && x < 1)
				B = ((-3.5) <= x && x < 1);
			else
				B = sin(3 * x) - cos(x);
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}