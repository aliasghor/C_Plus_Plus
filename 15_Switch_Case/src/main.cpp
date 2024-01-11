#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    short num;

    cout << "Please enter a number: ";
    cin >> num;

    switch(num) {
        case 5:
            cout << "You've just inserted number " << num << endl;
            break;

        case 4:
            cout << "You've just inserted number " << num << endl;
            break;

        case 3:
            cout << "You've just inserted number " << num << endl;
            break;

        default:
            cout << num << " is an unknown number!!" << endl; 
            break;
    }

    cin.get();
    return 0;
}
