#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr1[n], arr2[n];

    cout << "Enter " << n << " elements for arr1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    // Copying arr1 to arr2
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    cout << "Elements of arr2 after copying: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
