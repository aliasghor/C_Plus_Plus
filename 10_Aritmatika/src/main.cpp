#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
        Mathematics operations in programming
        1. Addition(+)
        2. Substraction(-)
        3. Multiplication(x)
        4. Division(/)
        5. Modulus(%)
    */

   // Addition(+)
   cout << "Addition(+)" << endl;

    int x = 10, y = 6;
    float result = x + y;

    cout << x << " + " << y << " = " << result << endl;

   // Substraction(-)
   cout << "\nSubstraction(-)" << endl;

   result = x - y;
   cout << x << " - " << y << " = " << result << endl;

   // Multiplication(x)
   cout << "\nMultiplication(x)" << endl;

   result = x * y;
   cout << x << " x " << y << " = " << result << endl;

   // Division(/)
   cout << "\nDivision(/)" << endl;

   result = (float)x / y;
   cout << x << " / " << y << " = " << result << endl;

   // Modulus(%)
   cout << "\nModulus(%)" << endl;

   result = x % y;
   cout << x << " % " << y << " = " << result << endl;

    cin.get();
    return 0;
}
