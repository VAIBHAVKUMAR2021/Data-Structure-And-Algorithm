#include<iostream>
using namespace std;

int main(){
    //inverted half pyramid
    for (int row=0;row<5;row=row+1){
        for(int col=0;col<5-row;col=col+1){
            cout << "* ";
        }
        cout << endl;
    }
    // half pyramid
    // for (int row = 0; row < 4; row=row+1){
    //     for(int col = 0; col<row+1;col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //for rectangle
//     for (int i = 0; i < 3; i=i+1)
//     {
//         for (int j = 0; j < 5; j=j+1)
//         {
//            cout << "* ";
//         }
//         cout << endl;
//     };

    
//     //for square

//     //outer loop
// for (int i = 0; i < 4; i=i+1)
// {
//     //inner loop
//     for (int j = 0; j < 4; j=j+1)
//     {
//         cout << "*" ;
//     }
//     cout <<  endl;
// }

// // HOLLOW SQUARE:

// int ROWS = 8;
// int COLS =6;

// for(int row = 0; row < ROWS; row=row+1)
// {
//     for (int col = 0; col < COLS; col= col+1)
//     {
//         if(row ==0 || row == ROWS-1){
//             cout << "* ";
//         }
//         else{
//             if(col == 0 || col == COLS-1){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//     }
//     cout<<endl;    
// }


return 0;
}

