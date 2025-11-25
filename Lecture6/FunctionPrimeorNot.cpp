#include <iostream>
using namespace std;

// 1 = prime number
// 0 = not prime number

bool isPrime(int n)
{

    for (int i = 2; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
        return 1;
    }
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << " is prime number " << endl;
    }

    else
    {
        cout << " is not a prime number " << endl;
    }
}