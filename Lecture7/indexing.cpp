#include<iostream>
using namespace std;
void printArray(int arr[], int size)

{

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << "     ";
    }

    cout << "Printing DONE " << endl;
}


int main(){


     int third[5] = {5, 11, 7, 9, 13};
    cout << "value is 3  index" << third[3] << endl;

    int n = 15;
      printArray(third , 15);



      char ch [ 5] = {'a', 'b', 'c', 'd','e'};

      cout<< ch[3];
  cout<<"printing the value " <<endl;
        

      for(int i = 0; i<5; i++){
       cout<< ch[i]  << "  ";
      }
}