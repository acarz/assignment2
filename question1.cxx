// my solution to Question 1 for Assignment 2

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Hello CERN" << endl;
    cout << "--------------" << endl;
    cout << " Assignment 2, Question 1 " << endl;

    //initializing the variables

    float avg;
    float stddv;

    //defining vector and adding numbers
    std::vector<float> Q;
    Q.push_back(2.3);
    Q.push_back(4.7);
    Q.push_back(0.1);
    Q.push_back(6.4);
    Q.push_back(3.8);
    Q.push_back(9.6);
    Q.push_back(9.0);
    Q.push_back(6.1);
    Q.push_back(7.3);
    Q.push_back(2.2);

    // initializing total and count
    float total = 0;
    int count = 0;

    // using for loop to visit every element in a vector and add them up
    for (int i = 0; i < Q.size(); i++)
    {
        total = total + Q[i];
        // we are countng how many elements do we have in the vector. We could also use Q.size()
        count++;
    }

    cout << endl << "The sum of all the values of Vector Q is " << total << endl;

    //we are calculating the average
    avg = total / count;

    cout << endl << "The Average of Vector Q is " << avg << endl;

    // We will calculate standart deviation. There is a function in vector.
    //Q.std calculates standard deviation but we will stick with the instructions
    // First, we will subtruct average from every element and take square of them and add them up.

    float total2=0;
    for (int i = 0; i < Q.size(); i++)
    {
        total2 = total2 + pow((Q[i]-avg),2);
       
    }

    // We rake square root of total2 divided by  Q.size()
    stddv=sqrt(total2/count);

    cout << endl << "The standard deviation of Vector Q is " << stddv << endl;
    
    return 99;
}