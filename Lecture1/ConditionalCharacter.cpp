#include <iostream>
#include<string>
using namespace std;

int main()
{
   string   ch;
    cout << "Enter a value:" << endl;
    cin >> ch;

    

    if ('a'>'z')
    {
        cout << "This is lower case" << endl;
    }

   else if('A'<'Z'){
    cout<<"This is upper case"<<endl;

   }

   else  {
    cout<<"This is numeric value"<<endl;
    
   }
}