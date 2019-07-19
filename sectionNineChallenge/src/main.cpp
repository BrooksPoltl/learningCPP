#include <iostream>
#include <vector>
using namespace std;

int main(){
    bool running {true};
    vector<int> list {};
    while(running){
    cout << "MENU OPTIONS:"<<endl;
    cout << "\tP - Print numbers"<<endl;
    cout << "\tA - Add a number"<<endl;
    cout << "\tM - Display mean of the numbers"<<endl;
    cout << "\tS - Display the smallest number"<<endl;
    cout << "\tL - Display the largest number"<<endl;
    cout << "\tQ - Quit\n"<<endl;
    cout << "Enter your choice: ";
    char choice {};
    cin >> choice;
    cout << choice <<endl;
    switch(choice){
        case 'p':
        case 'P':{
            cout << "List of the numbers: \n"<<endl;
            if(list.size() == 0)
                cout << "\t{} - the list is empty\n\n\n";
            else{
                for(auto item : list){
                    cout <<"\t"<< item << endl<< endl;
                };
            }
            break;
        }
        case 'a':
        case 'A':{
            cout << "\nPlease enter a number to add: ";
            int number_to_add{};
            cin >> number_to_add;
            list.push_back(number_to_add);
            cout << "\n Number added, thank you!";
            break;
        }
        case 'm':
        case 'M':{
            double average {0.0};
            double sum {0.0};
            for(int i = 0; i < list.size(); i++){
                average = (sum + list.at(i))/(i+1);
                sum = sum + list.at(i);
            }
            cout << "The mean of the numbers is : " << average << endl<< endl;
            break; 
        }
        case 's':
        case 'S':{
            int smallest{list.at(0)};
            for(int i = 1; i< list.size();i++){
                if(list.at(i) < smallest)
                    smallest = list.at(i);
            }
            cout << "The smallest number is : " << smallest <<endl << endl;
            break;
        }
        case 'l':
        case 'L':{
            int largest {list.at(0)};
            for(int i = 1; i< list.size();i++){
                if(list.at(i) > largest)
                    largest = list.at(i);
            }
            cout << "The largest number is : " << largest << endl<< endl;
            break;
        }
        case 'q':
        case 'Q':
            running = false;
            break;
        default:
            cout << "================================================"<<endl;
            cout << "\tUnknown selection, please ty again\n"<<endl;
            break;
    }
    }
    return 0;
}