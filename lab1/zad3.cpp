#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a = 0.5f, b = 0.5f, c = 0.5f;
    float i1 = a * (b + c), i2 = a * b + a * c;

    cout << fixed << setprecision(20);
    cout << i1 << "\n"
         << i2 << endl;

    return 0;
}