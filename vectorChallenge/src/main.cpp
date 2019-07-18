#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "\nelements vector1" << endl;
    cout <<"\t"<< vector1.at(0) << endl;
    cout <<"\t"<< vector1.at(1) << endl;
    cout <<"\tsize: "<< vector1.size()<< endl << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "elements vector2" << endl;
    cout <<"\t"<< vector2.at(0) << endl;
    cout <<"\t"<< vector2.at(1) << endl;
    cout <<"\tsize: "<< vector2.size()<< endl << endl;

    vector <vector<int> > vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "2d vector elements vector1" << endl;
    cout <<"\t"<< vector_2d.at(0).at(0) << endl;
    cout <<"\t"<< vector_2d.at(0).at(1) << endl;
    cout <<"\tsize: "<< vector_2d.size()<< endl << endl;

    cout << "2d vector elements vector2" << endl;
    cout <<"\t"<< vector_2d.at(1).at(0) << endl;
    cout <<"\t"<< vector_2d.at(1).at(1) << endl;
    cout <<"\tsize: "<< vector_2d.size()<< endl << endl;

    vector1.at(0) = 1000;

    cout << "2d vector with change vector 1" << endl;
    cout <<"\t"<< vector_2d.at(0).at(0) << endl;
    cout <<"\t"<< vector_2d.at(0).at(1) << endl;
    cout <<"\tsize: "<< vector_2d.size()<< endl << endl;

    cout << "2d vector with change vector 2" << endl;
    cout <<"\t"<< vector_2d.at(1).at(0) << endl;
    cout <<"\t"<< vector_2d.at(1).at(1) << endl;
    cout <<"\tsize: "<< vector_2d.size()<< endl << endl;

    cout << "\nelements vector1 with change" << endl;
    cout <<"\t"<< vector1.at(0) << endl;
    cout <<"\t"<< vector1.at(1) << endl;
    cout <<"\tsize: "<< vector1.size()<< endl << endl;

/*
    what did you expect? 
    
        vector 1 will change, but vector_2d wont.

    did you get what you expected? 
    
        yes

    what do you think happened?

    the change to vector 1 did not affect vector_2d because vector_2d
    is at a different place in memory.

 */
    return 0;
}