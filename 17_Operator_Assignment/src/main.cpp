#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
        Assignment operator is used to shorten a mathematics expressions like this
        short x = 10;

        and then we want to add x by 10 we can do it like this

        first we must assign the variable again and then put the x by the value that you want to add which is 10

        here's what it looks like

        x = x + 10; <- this result will be 20 and current x variabel holds a values of 20

    */

   short x = 10;

   x = x + 10;

   cout << "x after being x = x + 10 =  " << x << endl;

   // We can shorten the previous code that looks like this
   x += 10;
   cout << "x after being x += 10 =  " << x << endl;

   x -= 10;
   cout << "x after being x -= 10 =  " << x << endl;

   x *= 10;
   cout << "x after being x *= 10 =  " << x << endl;

   x /= 10;
   cout << "x after being x /= 10 =  " << x << endl;

   x %= 10;
   cout << "x after being x %= 10 =  " << x << endl;




    cin.get();
    return 0;
}
