#include <iostream>
using namespace std;

// function signature 

void printCounting(int n)
{
    for (int i = 1; i <= n; i++)
    // function body
    {
        cout << i << "   " << endl;
        
    }
}
int main()
{
    int n;
    cin >> n;

    // function call 

    printCounting(n);

    return 0;
}