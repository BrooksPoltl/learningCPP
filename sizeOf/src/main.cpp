#include <iostream>
#include <climits>

using namespace std;

int main(){

    // types

    //     sizeof information
    // ============================
    // char: 1 bytes
    // int:  4 bytes
    // unsigned int: 4 bytes
    // short: 2 bytes
    // long:  4 bytes
    // long long:  8 bytes

    cout << "sizeof information" << endl;
    cout << "============================" << endl;
    cout << "char: "<< sizeof(char) << " bytes" << endl;
    cout << "int:  "<< sizeof(int) << " bytes" << endl;
    cout << "unsigned int: "<< sizeof(unsigned int) << " bytes" << endl;
    cout << "short: "<< sizeof(short) << " bytes" << endl;
    cout << "long:  "<< sizeof(long) << " bytes" << endl;
    cout << "long long:  "<< sizeof(long long) << " bytes" << endl<< endl;

    // floats
    //     sizeof float information
    // ============================
    // float: 4 bytes
    // double:  8 bytes
    // long double: 12 bytes
    cout << "sizeof float information" << endl;
    cout << "============================" << endl;
    cout << "float: "<< sizeof(float) << " bytes" << endl;
    cout << "double:  "<< sizeof(double) << " bytes" << endl;
    cout << "long double: "<< sizeof(long double) << " bytes" << endl;
    return 0;
}