/*
C++ program to multiply two integers without  
using multiplication or division operators
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


//method to multiply two integers using logorithm
int multiplyWithLogorithm(int x, int y)
{
    return (x<0 || y<0) ? -exp(log(abs(x))+log(abs(y))) : exp(log(x)+log(y));
}


// //method to multiply two integers using left and right shift operators
// int multiplyWithShift(int x, int y) 
// {
//     //initializing product variable (result of multiplication)
//     int product = 0;

//     //making sure none of the params is 0
//     if (x != 0 && y != 0)
//     {
//         //converting to positive
//         int a = abs(x);
//         int b = abs(y);

//         //until a becomes 0
//         while (a > 0)
//         {
//             //add b to product if a becomes odd
//             if (a & 1)
//             {
//                 product += b;
//             }
//             //halfing
//             a>>=1;
//             //doubling
//             b<<=1;
//         }
//         return ((x<0 && y<0) || (x>0 && y>0)) ? product : -product ;
//     }
//     else
//     {
//         return product;
//     }
    
// }


// //method to multiply two integers using addition operator
// int multiplyWithAddition(int x, int y) 
// {
//     //initializing product variable (result of multiplication)
//     int product = 0;

//     //making sure none of the params is 0
//     if (x != 0 && y != 0)
//     {
//         //add y to product x times
//         for (int i=0; i<abs(x); i++)
//         {
//             product += y;
//         }
//         return ((x<0 && y<0) || (x>0 && y>0)) ? product : -productt;
//     }
//     else
//     {
//         return product;
//     }
// }

//Driver code
int main()
{
    int a, b;
    cout << 'Please enter in two integers:' << endl;
    cin >> a >> b ;
    cout << endl;
    cout << 'The product of ' << a << ' and ' << b << ' is ' << multiplyWithLogorithm(a,b) << endl; 
	//cout << 'The product of ' << a << ' and ' << b << ' is ' << multiplyWithShift(a,b) << endl;
    //cout << 'The product of ' << a << ' and ' << b << ' is ' << multiplyWithAddition(a,b) << endl;

    return 0;
}
