#include <iostream>
#include <vector>

using namespace std;

int main(){
    // vector <char> vowels {'a','e','i','o',u};
    vector <int> test_scores {100,98,89,85,93};
    // vector <double> hi_temperatures (365,80.0);

    cout << "\n first score at index 0:"<< test_scores.at(0)<<endl;
    cout << "second score at index 1:"<< test_scores.at(1)<<endl;
    cout << "third score at index 2:"<< test_scores.at(2)<<endl;
    cout << "fourth score at index 3:"<< test_scores.at(3)<<endl;
    cout << "fifth score at index 4:"<< test_scores.at(4)<<endl;
    return 0;
}