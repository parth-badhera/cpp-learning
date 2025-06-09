// size of operator tell us the size(in bits) of our data type;
// in cpp every comipler have different size for same data type

#include <iostream>
using namespace std;
int main() {
    cout << "Size of short: " << sizeof(short) << " bytes\n";
    cout << "Size of int: " << sizeof(int) << " bytes\n";
    cout << "Size of long: " << sizeof(long) << " bytes\n";
    cout << "Size of long long: " << sizeof(long long) << " bytes\n";
    cout << "Size of float: " << sizeof(float) << " bytes\n";
    cout << "Size of double: " << sizeof(double) << " bytes\n";
    cout << "Size of long double: " << sizeof(long double) << " bytes\n";
    cout << "Size of char: " << sizeof(char) << " byte\n";
    cout << "Size of bool: " << sizeof(bool) << " byte\n";
}