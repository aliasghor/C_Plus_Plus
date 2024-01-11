#include <iostream>

using namespace std;

float calcuclate(int& num1, char& choice, int& num2) {
    float result;
    
    switch (choice)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '/':
        result = num1 / num2;
        break;

    case 'x':
        result = num1 * num2;
        break;
    
    default:
        cout << "Error invalid " << choice << "!!" << endl;
        break;
    }

    return result;
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    float result;
    char choice, quit;

    while(true) {
        system("cls");
        cout << "Please input your first number: ";
        cin >> num1;

        cout << "Please input your mathematics operation (+,-/,x): ";
        cin >> choice;

        cout << "Please input your second number: ";
        cin >> num2;

        result = calcuclate(num1,choice,num2);
        cout << "Your result is = " << result << endl;

        cout << "Do you want to quit from this program? (Y/N): ";
        cin >> quit;

        if(quit == 'y' || quit == 'Y') {
            break;
        }
    }

    cout << "Calculator program finished" << endl;

    cin.get();
    return 0;
}
