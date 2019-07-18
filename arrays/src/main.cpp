#include <iostream>

using namespace std;

int main(){
    int test_scores[] {100,90,80,70,60};
    cout << "\n first score at index 0:"<< test_scores[0]<<endl;
    cout << "second score at index 1:"<< test_scores[1]<<endl;
    cout << "third score at index 2:"<< test_scores[2]<<endl;
    cout << "fourth score at index 3:"<< test_scores[3]<<endl;
    cout << "fifth score at index 4:"<< test_scores[4]<<endl;

    cout << "value of the array: "<< test_scores << endl;
    return 0;
}