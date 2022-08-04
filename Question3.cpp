/*
Write a C++ program to read N employees name, gender, post, and salary in an array of
object called EMP. Then display all the details
*/

#include<iostream>
#include<conio.h>

using namespace std;

class Employee
{
    char name[100], gender[10], post[50];
    float salary;

public:

    void setValue(){
        
        getchar();
        
        cout<<"Enter the name: ";
        cin.getline(name, 100);

        cout<<"Enter the gender: ";
        cin.getline(gender, 10);

        cout<<"Enter the post: ";
        cin.getline(post, 50);

        cout<<"Enter the salary: ";
        cin>>salary;
    }

    void showValue(){
        cout<<"Name: "<<name<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Post: "<<post<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};

int main(){
    int n;
    cout<<"Enter the number of Employees: ";
    cin>>n;

    Employee EMP[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the details of Employee "<<i+1<<": "<<endl;
        EMP[i].setValue();
    }

    cout<<"Employee Details: "<<endl;
    for(int i=0; i<n; i++){
        cout<<"Employee "<<i+1<<": "<<endl;
        EMP[i].showValue();
    }

    return 0;
}