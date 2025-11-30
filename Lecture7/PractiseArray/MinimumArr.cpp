#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array";
    cin >> n;
    int arr[n];
    cout << " Enter  number";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minNum = arr[0];
    for (int i = 1; i < n; i++)
    { 
        if (arr[i] < minNum)
        {
            minNum = arr[i];
        }
    }

    cout << "Minimum number in array " << minNum << endl;

    return 0;
}