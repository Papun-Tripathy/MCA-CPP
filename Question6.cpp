/*
Write a C++ program using constructor overloading.
*/
#include<iostream>
using namespace std;

class A{
    int x;
    public:
    A(){
        cout<<"X: "<<x<<endl;
    }
    A(int a){
        x = a;
        cout<<"X: "<<x<<endl;
    }
    A(A &a){
        x = a.x;
        cout<<"X: "<<x<<endl;
    }
};

int main(){
    A a;
    A b(10);
    A c(a);
    return 0;
}