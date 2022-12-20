#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, R, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	// Початок оформлення
	cout << fixed;
	cout << "|----------Title----------|" << endl;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	// Кінець оформлення

	x = xp;
	while (x <= xk) // Цикл
	{
		if (x <= (-1 - R))
			y = (-x - 2);
		else
			if (-1 - R < x && x <= -1)
				y = sqrt(R * R - (x + 1) * (x + 1));
			else
				if (-1 < x && x <= 1)
					y = R;
				else
					if (1 < x && x <= 2)
						y = R + (-1 - R) * (x - 1);
					else
						y = -1;

		// Ще початок оформлення
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(2) << y
			<< " |" << endl;
		// Ще кінець оформлення

		x += dx;
	}

	// Ще початок оформлення
	cout << "---------------------------" << endl;
	// Ще кінець оформлення

	return 0;
}