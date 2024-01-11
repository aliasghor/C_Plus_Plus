#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
        Operator logical is one of the most useful fundamental of programmings
        beause it teach us how an if statement gets executed, how binaries are worked etc.

        here are some Operator logicals that are often used
        1. Not(!) <- this will negate the condition.if the first condition is true then this operator will make it to the opposite which is false

        2. And(&&) <- this operator often used when we want to compared 2 conditions.and the result of this "and" statement if one of the condition is false then the entire condition is false

        3. Or(||) <- this operator often used when we want to compared 2 conditions.and the result of this "or" statement if one of the condition is false then the entire condition is still consider true
    */

    bool correct = true, incorrect = false, result;

    // Not(!)
    cout << " Not(!)" << endl;

    result = !correct;
    cout << correct << " After being negated = " << result << endl;

    // And(&&)
    cout << "\nAnd(&&)" << endl;

    result = correct && incorrect;
    cout << correct << " && " << incorrect << " = " << result << endl; // False(0)

    correct = true;
    incorrect = true;
    result = correct && incorrect;

    cout << correct << " && " << incorrect << " = " << result << endl; // True(1)

    correct = false;
    incorrect = true;
    result = correct && incorrect;

    cout << correct << " && " << incorrect << " = " << result << endl; // False(0)

    correct = false;
    incorrect = false;
    result = correct && incorrect;

    cout << correct << " && " << incorrect << " = " << result << endl; // False(0)

    // Or(||)
    cout << "\nOr(||)" << endl;
    correct = true;
    incorrect = false;

    result = correct || incorrect;
    cout << correct << " || " << incorrect << " = " << result << endl; // True(1)

    correct = true;
    incorrect = true;
    result = correct || incorrect;

    cout << correct << " || " << incorrect << " = " << result << endl; // True(1)

    correct = false;
    incorrect = true;
    result = correct || incorrect;

    cout << correct << " || " << incorrect << " = " << result << endl; // True(1)

    correct = false;
    incorrect = false;
    result = correct || incorrect;

    cout << correct << " || " << incorrect << " = " << result << endl; // False(0)



    cin.get();
    return 0;
}
