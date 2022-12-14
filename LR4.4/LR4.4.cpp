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
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (x <= -8)
            y = -R;
        else
            if (-8 < x && x <= -R)
                y = -R + (R / (-R + 8)) * (x - R);
            else
                if (-R < x && x <= R)
                    y = -sqrt(R * R - x * x);
                else
                    if (R < x && x <= 5)
                        y = (2 * x - 2 * R) / (5 - R);
                    else
                        y = 3;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }

    system("pause");
    cout << "---------------------------" << endl;
    return 0;
}