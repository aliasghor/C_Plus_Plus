#include <iostream>

using namespace std;

extern int factorial(int num);
extern int sum(int x, int y);

int main(int argc, char const *argv[])
{
    /*
        C++ compilation process step by steps
        1. Preprocessor directive.this is the first step before compilation happen the main job of this step is used to replaced every directive(#) with their own values or merged another file content into our source for instancee like #include <iostream> this directive will merge or copied everything from that file into our file

        2. Compilation.this the second step after Preprocessor directive the main job of compilation is used to compiled our source code high level language into machine readble language so that the computer can understand and a compilation is used to handle every syntax error

        *Optional for some compilers
        3. Assembler.actually some C++ compilers did not compiled our source code directly into machine code instead some of the compilers may compiled into assembly language first and then after being translated into assembly language the assembler will do it is job to translate the assembly language into machine readble code

        4. linker.a linker is used to combined multiple object files into single executable files and a linker is used to "link" those functions and variabels together.for instance if we make a prototype function in our main file the linker will try to check if the function is declared outside file and if it is defined outside of our file the linker will link the function together 
    */

    int result = factorial(10);
    int sum_result = sum(5,5);

    cout << "Factorial result = " << result << endl;
    cout << "Sum result = " << sum_result << endl;

    cin.get();
    return 0;
}