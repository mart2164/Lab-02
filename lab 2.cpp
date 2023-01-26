#include <iostream>

using namespace std;

int main()
{   
    cout<<"I am Adrian, and I will solve the equation:" << endl;

    cout << "Ax + B = 0" << endl; 

    cout <<"For x" << endl;

    float A;
    float B;
    float x;

    cout << "Please enter a value for A: ";
    cin >> A; 

    cout << "Please enter a value for B: ";
    cin >> B; 

    cout << "Solving " << A << "x" << "+" << B << "=0 for x..." << " " <<endl;

    x = (B * (-1)) / A;

    cout << "And x=" << x << endl;
}
