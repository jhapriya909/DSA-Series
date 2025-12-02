#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Elements at alternate positions (0, 2, 4...): ";
    for (int i = 0; i < n; i += 2)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
