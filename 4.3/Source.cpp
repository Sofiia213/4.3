#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, y, R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "y" << "    |" << endl;
	cout << "---------------------------" << endl;
	x = dx;
	while (x <= dx)
	{
		if (x <= 0)
			y = (-R / 6) * (x + 6);
		else
			if (0 < x && x <= R)
				y = -sqrt(R * R - x * x);
			else
				if (R < x && x <= 2 * R)
					y = sqrt(R * R - (x - 2 * R) * (x - 2 * R));
				else
					y = R;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}