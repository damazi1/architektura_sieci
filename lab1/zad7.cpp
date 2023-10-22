#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x1 = 1.00E+21, x2 = 17.0, x3 = -10.0, x4 = 130.0, x5 = -1.00E+21;
    double s1 = x1 + x2 + x3 + x4 + x5, s2 = (((x1 + x2) + x3) + x5) + x4,
           s3 = (((x1 + x2) + x4) + x2) + x5, s4 = (((x1 + x2) + x5) + x3) + x4,
           s5 = (((x1 + x5) + x3) + x4) + x2, s6 = (((x1 + x2) + x5) + x3) + x4,
           s7 = (((x1 + x3) + x2) + x4) + x5;

    cout << s1 << "\n"
         << s2 << "\n"
         << s3 << "\n"
         << s4 << "\n"
         << s5 << "\n"
         << s6 << "\n"
         << s7 << endl;

    return 0;
}