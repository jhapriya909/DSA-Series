#include <iostream>
using namespace std;
bool search(int arr[],  int size , int key)
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[10] = {5, 7, 8, 9, 4, 1, 2, 3, 0, 6};

    cout << "Enter the element for a serach" << endl;

    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {

        cout << " Key is present" << endl;
    }

    else
    {
        cout << " Key is absent" << endl;
    }

    return 0;
}