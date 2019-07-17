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
    cout << "long double: "<< sizeof(long double) << " bytes" << endl<< endl;

    //climits

    cout << "============================" << endl;
    cout << "Minimum values:" <<endl;
    cout << "char: "<< CHAR_MIN << endl;
    cout << "int:  "<< INT_MIN << endl;
    cout << "short: "<< SHRT_MIN << endl;
    cout << "long:  "<< LONG_MIN << endl;
    cout << "long long:  "<< LLONG_MIN << endl<< endl;

    cout << "============================" << endl;
    cout << "Maximum values:" <<endl;
    cout << "char: "<< CHAR_MAX << endl;
    cout << "int:  "<< INT_MAX << endl;
    cout << "short: "<< SHRT_MAX << endl;
    cout << "long:  "<< LONG_MAX << endl;
    cout << "long long:  "<< LLONG_MAX << endl<< endl;
    return 0;
}