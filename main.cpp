#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
    cout << " Maximum = ";
    if (a > b)
        cout << a;
    else
        cout << b;
    cout << " Minimum = ";
    if (a < b)
        cout << a;
    else
        cout << b;
}
