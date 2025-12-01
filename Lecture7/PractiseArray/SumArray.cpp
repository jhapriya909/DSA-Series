#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Sum of array " << endl;
    cin >> n;

    int arr[n];

    int sum = 0;

    cout << " Enter the element " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        sum += arr[i];
    }

    cout << " Sum of array " << sum;
}