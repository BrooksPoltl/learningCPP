#include <iostream>

using namespace std;

int main(){
    double hi_temps [] {90.1,89.8,77.5,81.6};
    cout <<"\n The first high temperature is: " << hi_temps[0]<<endl;
    hi_temps[0] = 100.7;
    cout << "The first high temperature is now: "<< hi_temps[0]<<endl;
    return 0;
}