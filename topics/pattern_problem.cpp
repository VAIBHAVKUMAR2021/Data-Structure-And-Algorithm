#include<iostream>
using namespace std;

int main(){
    //for rectangle
    for (int i = 0; i < 3; i=i+1)
    {
        for (int j = 0; j < 5; j=j+1)
        {
           cout << "* ";
        }
        cout << endl;
    };

    cout << endl;
    
    //for square
    //outer loop
for (int i = 0; i < 4; i=i+1)
{
    //inner loop
    for (int j = 0; j < 4; j=j+1)
    {
        cout << "*" ;
    }
    cout <<  endl;
}
return 0;
}
