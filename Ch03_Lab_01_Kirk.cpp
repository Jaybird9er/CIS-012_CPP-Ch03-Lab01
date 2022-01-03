#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    // variables
    float kilos = 0.0;
    float lbs = 0.0;

    // manipulator
    cout << fixed << showpoint;
    cout << setprecision(2);

    // inputs
    cout << "Enter the weight in kilograms: ";
    cin >> kilos;

    // math
    lbs = 2.2 * kilos;

    // outputs
    cout << "The equivalent in pounds = " << lbs << endl;

    return 0;
}
