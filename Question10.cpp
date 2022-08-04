/*
Write a C++ program to read two numbers. Find its division using exception handling
method.
*/

#include <iostream>
using namespace std;

class Calculate
{
    float x, y;

public:
    void takeValue(){
        cout << "Enter first number: ";
        cin >> x;
        cout << "Enter second number: ";
        cin >> y;
    }

    void findDivision(){
        if(y == 0) throw 'E';
        float res = x / y;
        throw res;
    }

};

int main(){

    try{
        Calculate obj;
        obj.takeValue();
        obj.findDivision();
    } catch(float val) {
        cout << "Division is: " << val << endl;
    } catch(char c) {
        cout << "Division by zero is not possible" << endl;
    }

    return 0;
}
