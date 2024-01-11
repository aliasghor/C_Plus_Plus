#include <iostream>
#include <typeinfo>
#include <limits>

using namespace std;

template<typename T>
void print(T& data_type) {
    cout << data_type << " has a data type of " << typeid(data_type).name() << endl;
}

int main(int argc, char const *argv[])
{
    // Tipe data bilangan bulat
    cout << "Tipe data bilangan bulat(integer,short,long,long long)" << endl;
    int num_int = 2147483648; // <- integer can hold up to 32 bits

    print(num_int);
    cout << typeid(num_int).name() << " has a maximum value of = " << numeric_limits<int>::max() << endl;
    cout << typeid(num_int).name() << " has a minimum value of = " << numeric_limits<int>::min() << endl;

    long long long_num = 10;

    print(long_num);
    cout << typeid(long_num).name() << " has a maximum value of = " << numeric_limits<long long>::max() << endl;
    cout << typeid(long_num).name() << " has a minimum value of = " << numeric_limits<long long>::min() << endl;

    short short_num = 1;

    print(short_num);
    cout << typeid(short_num).name() << " has a maximum value of = " << numeric_limits<short>::max() << endl;
    cout << typeid(short_num).name() << " has a minimum value of = " << numeric_limits<short>::min() << endl;

    // Tipe data bilangan decimal
    cout << "\nTipe data bilangan decimal(float and double and long double)" << endl;
    float num_float = 5.5;

    print(num_float);
    cout << typeid(num_float).name() << " has a maximum value of = " << numeric_limits<float>::max() << endl;
    cout << typeid(num_float).name() << " has a minimum value of = " << numeric_limits<float>::min() << endl;

    double num_double = 10.5;

    print(num_double);
    cout << typeid(num_double).name() << " has a maximum value of = " << numeric_limits<double>::max() << endl;
    cout << typeid(num_double).name() << " has a minimum value of = " << numeric_limits<double>::min() << endl;

    long double num_long_double = 3.141592653589;

    print(num_long_double);
    cout << typeid(num_long_double).name() << " has a maximum value of = " << numeric_limits<long double>::max() << endl;
    cout << typeid(num_long_double).name() << " has a minimum value of = " << numeric_limits<long double>::min() << endl;

    // Tipe data character
    cout << "\nTipe data character(char)" << endl;
    char letter = 65;

    print(letter);
    cout << typeid(letter).name() << " has a maximum value of = " << (int)numeric_limits<char>::max() << endl;
    cout << typeid(letter).name() << " has a minimum value of = " << (int)numeric_limits<char>::min() << endl;

    char name[] = "Ali Ganteng";
    print(name);

    // Tipe data boolean(biner)
    cout << "\nTipe data boolean(biner)" << endl;

    bool correct = true;

    print(correct);
    cout << typeid(correct).name() << " has a maximum value of = " << (int)numeric_limits<bool>::max() << endl;
    cout << typeid(correct).name() << " has a minimum value of = " << (int)numeric_limits<bool>::min() << endl;

    bool incorrect = false;

    print(incorrect);
    cout << typeid(incorrect).name() << " has a maximum value of = " << (int)numeric_limits<bool>::max() << endl;
    cout << typeid(incorrect).name() << " has a minimum value of = " << (int)numeric_limits<bool>::min() << endl;

    // Tipe data dengan menggunakan unsigned
    cout << "\nTipe data dengan menggunakan unsigned" << endl;
    unsigned int unsigned_int = 10;

    print(unsigned_int);
    cout << typeid(unsigned_int).name() << " has a maximum value of = " << numeric_limits<unsigned int>::max() << endl;
    cout << typeid(unsigned_int).name() << " has a minimum value of = " << numeric_limits<unsigned int>::min() << endl;



    cin.get();
    return 0;
}
