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
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;

	x = xp;

	while (x <= xk)
	{

		if (x <= -8)
			y = R;
		
		else
			if (-8 - R < x && x <= -8 + R)
				y = - sqrt(pow(R, 2) - pow((x + 18), 2));
			else
				if (-8 + R < x && x <= -4)
					y = R;
				else
					if (-4 < x && x <= 0)
						y = (-R + 1) / 4 * x - 1;
					else
						y = (1 / 3) * x - 1;


		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}
