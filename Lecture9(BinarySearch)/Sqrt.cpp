#include <iostream>
using namespace std;

long long int sqrtInterger(int n)
{

    long long s = 0;
    long long e = n;
    long long ans = -1;
    long long mid = s + (e - s) / 2;

    while (s <= e)
    {

        long long square = mid * mid;

        if (square == n)
            return mid;

        if (square < n)
        {
            ans = mid; // floor value store
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int Precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < Precision; i++)
    {
        factor = factor / 10; // 0.1 0.01, 0.001
        for (double j = tempsol; j * j < n; j = j + factor)
        {

            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << " Enter the number" << endl;

    cin >> n;

    int tempsol = sqrtInterger(n);
    cout << " Answer is " << morePrecision(n, 3, tempsol) << endl;
}