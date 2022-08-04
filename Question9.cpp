/*
Write a C++ program using pure abstract class.
*/
#include<iostream>
using namespace std;

class A{
    public:
    virtual void print() = 0;
};

class B: public A{
    public:
    void print(){
        cout<<"B"<<endl;
    }
};

int main(){
    B b;
    b.print();

    return 0;
}
