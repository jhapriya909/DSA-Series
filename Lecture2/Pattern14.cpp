#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n; 
    int row = 1;
    int value = 1;


    while(row<=n){
        int col  = 1;
        while(col<= row){

            char ch = 'A' + row + col - 1;
            cout<<ch;
            value = value + 1;
            col = col + 1;


        }
        cout<<endl;
        row = row + 1;

    }

   
}