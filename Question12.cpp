/*
Write a C++ program to find largest and smallest of three numbers using class template.
*/

#include<iostream>
using namespace std;

template <class T>
class Calculate{
    T a,b,c;

    public:
    Calculate(T a1,T b2,T c3){
        a=a1;
        b=b2;
        c=c3;
    }

    T findLargest(){
        if(a>b && a>c){
            return a;
        }
        else if(b>a && b>c){
            return b;
        }
        else{
            return c;
        }
    }

    T findSmallest(){
        if(a<b && a<c){
            return a;
        }
        else if(b<a && b<c){
            return b;
        }
        else{
            return c;
        }
    }

};

int main(){

    int a,b,c;

    cout<<"Enter the values of a,b,c: ";
    cin>>a>>b>>c;

    float d,e,f;
    cout<<"Enter the values of d,e,f: ";
    cin>>d>>e>>f;

    Calculate<int> c1(a,b,c);
    Calculate<float> c2(d,e,f);

    cout<<"Largest number is: "<<c1.findLargest()<<endl;
    cout<<"Smallest number is: "<<c1.findSmallest()<<endl;

    cout<<"Largest floating number is: "<<c2.findLargest()<<endl;
    cout<<"Smallest floating number is: "<<c2.findSmallest()<<endl;

    return 0;
}