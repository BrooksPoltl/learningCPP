#include <iostream>

using namespace std;

int main(){
    cout << "Hello, welcome to Frank's Carpet Cleaning Service\n" << endl;
    cout << "How many rooms would you like cleaned" << endl;

    int number_of_rooms {0};
    cin >> number_of_rooms;

    cout << "\n Estimate for carpet cleaning service"<<endl;
    cout << "\tCost: "<< number_of_rooms * 30<< endl;
    cout << "\tTax: " << number_of_rooms * 30 * .06 << endl;
    cout << "\tTotal Estimate: "<< number_of_rooms*30*1.06 <<endl;
    cout << "\texpiration time: 30 days"<<endl; 
    return 0;
}