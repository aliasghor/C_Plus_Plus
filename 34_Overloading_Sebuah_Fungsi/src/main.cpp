#include <iostream>

using namespace std;

// Basic function
inline int luas_kotak(int panjang, int lebar) {
    int luas = panjang * lebar;
    return luas;
}

// Overload functions
inline int luas_kotak(int panjang) {
    int luas = panjang * panjang;
    return luas;
}

inline double luas_kotak(double panjang, double lebar) {
    double luas = panjang * lebar;
    return luas;
}

int main() {
    cout << "Luas kotak 2x3 = " << luas_kotak(2,3) << endl;
    cout << "Luas kotak 2x2 = " << luas_kotak(2) << endl;
    cout << "Luas kotak 2.5 x 2.5 = " << luas_kotak(2.5,2.5) << endl;

    cin.get();
    return 0;
}