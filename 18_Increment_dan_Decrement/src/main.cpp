#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    short x = 5, y = 5;

    // Post increment(++)
    cout << "Post increment(++)" << endl;
    
    cout << "Current x value = " << x << endl;
    cout << x++ << endl;
    cout << "X after being incremented = " << x << endl;

    // Pre increment(++)
    cout << "\nPre increment(++)" << endl;
    
    cout << "Current y value = " << x << endl;
    cout << ++y << endl;
    cout << "Y after being Pre incremented = " << y << endl;


    cin.get();
    return 0;
}
