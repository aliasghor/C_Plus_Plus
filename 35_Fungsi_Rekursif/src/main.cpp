#include <iostream>

using namespace std;

int power(int num1, int num2) {
    if (num2 == 1) {
        cout << num1 << endl;
        return num1;
    }
    else {
        cout << num1 << "x";
        return num1 * power(num1,num2 - 1);
    }
}

int main(void) {
    int num1 = 5, num2 = 3, result;

    result = power(num1, num2);

    cout << num1 << " to the power of " << num2 << " = " << result << endl;

    cin.get();
    return 0;
}