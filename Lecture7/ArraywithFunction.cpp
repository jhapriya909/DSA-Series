#include <iostream>
using namespace std;

void printArray(int arr[], int size)

{

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << "     ";
    }

    cout << "Printing DONE " << endl;
}

int main()
{
    // declare
    int number[10];

    // accessing index

    // cout << "value  of  9  index " << number[9] << endl;

    int second[3] = {5, 7, 11};

    cout << "value is 2  index" << second[2] << endl;

    int third[5] = {5, 11, 7, 9, 13};
    cout << "value is 3  index" << third[3] << endl;

    int n = 15;
    //   printArray(third , 15);

    int fiveth[10] = {0};

    n = 10;
    //  printArray(third , 10);

    // size of array

    //  initilising all location  with 1 (not possible with below line )

    int sixth[15] = {1};

    n = 15;
    printArray(sixth, 10);

    int sixthSize = sizeof(sixth) / sizeof(int);
    cout << "Size of sixth is : " << sixthSize << endl;

    char ch[4] = {'a', 'b', 'c', 'd'};
    cout << ch[3];

    cout << "Printing the array " << endl;

    for (int i = 0; i < 5; i++)
    {

        cout << ch[i];
    }

    cout << "value  of  20  index " << number[21] << endl;
}
