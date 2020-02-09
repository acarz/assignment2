#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Hello CERN" << endl;
    cout << "--------------" << endl;


    int total = 0;

    for (int i = 0; i < 1000; i++)
    {

        if ((i % 3 == 0) || (i % 5 == 0))
        {
            total += i;

        }
    }
    cout << endl << "The sum of all the multiples of 3 or 5 below 1000 is " << total << endl;


    return 99;
}
