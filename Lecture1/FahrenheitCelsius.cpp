#include <iostream>
using namespace std;
int main()
{
    float fahrenheit, celsius;

    cout << "Enter temperture is fahrenheit :" << endl;

    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    cout << "Temperature is Celsisus: " << celsius << "  " << endl;
}