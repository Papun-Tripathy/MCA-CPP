/*
Write a C++ program using dynamic binding method
*/

#include<iostream>

using namespace std;

// dynamic binding 
class A{
    public:
    virtual void print(){
        cout<<"A"<<endl;
    }
};

class B: public A{
    public:
    virtual void print(){
        cout<<"B"<<endl;
    }
};

int main(){
    A *a = new B;
    a->print();
    return 0;
}

