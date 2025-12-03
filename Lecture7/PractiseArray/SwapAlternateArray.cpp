#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    cout << endl;
}
int main()
{
    int even[8] = {0, 12, 45, 56, 89, 76, 42, 21};

    int odd[5] = {9, 7, 8, 4, 2};

    swapAlternate(even, 8);
    printArray(even, 8);
    cout << endl;

    swapAlternate(odd, 5);

    printArray(odd, 5);

    return 0;
}