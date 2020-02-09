// my solution to Question 1 for Assignment 2

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Hello CERN" << endl;
    cout << "--------------" << endl;
    cout << " Assignment 2, Question 3 " << endl;

    std::vector<float> Q;
    char input = 'y';

    while (input = 'y')
    {
        cout << "Should I add new numbers to vector y/n " << endl;
        cin >> input;

        if (input == 'y')
        {
            Q.push_back(rand());
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < Q.size(); i++)
    {
        cout << i << "th value of the vector is " << Q[i] << endl;
    }


    return 99;
}

