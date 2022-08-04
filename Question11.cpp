/*
Write a C++ program to find largest and smallest of ‘n’ numbers using function template.
*/

#include<iostream>
using namespace std;

template <class T>
T smallest(T a, T b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

template <class T>
T largest(T a, T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int small, large;
    small = a[0];
    large = a[0];

    for(int i=0;i<n;i++){
        small = smallest(small, a[i]);
        large = largest(large, a[i]);
    }

    cout<<"Smallest number is: "<<small<<endl;
    cout<<"Largest number is: "<<large<<endl;

    return 0;
}