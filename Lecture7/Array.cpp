#include <iostream>
using namespace std;

void printArray()
{
}

int main()
{
    // declare
    int number[10];

    // accessing index

    cout << "value  of  9  index " << number[9] << endl;

    int second[3] = {5, 7, 11};

    cout << "value is 2  index" << second[2] << endl;

    int third[5] = {5, 11, 7, 9, 13};
    cout << "value is 3  index" << third[3] << endl;



    int fourth[15] = {7,5 };

    int n = 15;

    for(int i = 0; i < n; i ++){

         // zero print 

        cout<<fourth[i]   <<"     ";
    }


// i can initilization from 0 
    int fiveth[15] = {0 };

     n = 15;

    for(int i = 0; i < n; i ++){

         // zero print 

         cout<<endl;

        cout<<fiveth[i];
    }

    //  initilising all location  with 1 (not possible with below line )

     int sixth[10] = {1 };

     n = 10;

    for(int i = 0; i < n; i ++){

         // zero print 

        cout<<sixth[i]  <<  "  ";
    }




    

    cout << "value  of  20  index " << number[21] << endl;
}
