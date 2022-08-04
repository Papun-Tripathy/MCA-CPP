/*
Write a C++ program using Multipath Inheritance.
*/
#include<iostream>

using namespace std;

class A{
    public:
    void printA(){
        cout<<"A"<<endl;
    }
};

class B:virtual public A{
    public:
    void printB(){
        cout<<"B"<<endl;
    }
};

class C:virtual public A{
    public:
    void printC(){
        cout<<"C"<<endl;
    }
};

class D:public B,public C{
    public:
    void printD(){
        cout<<"D"<<endl;
    }
};

int main(){
    D d;
    d.printA();
    d.printB();
    d.printC();
    d.printD();

    return 0;
}
