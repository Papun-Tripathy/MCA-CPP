/*
Write a C++ program to read student name, roll number, and marks in 6 subjects. Then 
display the output in the given format:
Name = 
Roll =
Subject-1 =
Subject-2 =
Subject-3 =
Subject-4 =
Subject-5 =
Subject-6 =
Total Mark =
Average Mark =
*/

#include <iostream>
#include <conio.h>

using namespace std;

class Student
{
    char Name[100];
    int roll;
    float marks[6], totalMark, avgmark;

public:
    void assignValue()
    {
        // efficient name storing

        cout << "Enter the roll number of the student: ";
        cin >> roll;
        getchar();
        cout << "Enter the name of the student: ";
        cin.getline(Name, 100);

        cout << "Enter the Marks for 6 Subjects: "<<endl;
        totalMark = 0;
        for (int i = 0; i < 6; i++)
        {
            cout << "Subject-"<<i+1<<": ";
            cin >> marks[i];
            totalMark += marks[i];
        }
        avgmark = totalMark / 6;
    }

    void show()
    {
        cout << "Name =" << Name << endl;
        cout << "Roll =" << roll << endl;
        cout << "Subject-1 =" << marks[0] << endl;
        cout << "Subject-2 =" << marks[1] << endl;
        cout << "Subject-3 =" << marks[2] << endl;
        cout << "Subject-4 =" << marks[3] << endl;
        cout << "Subject-5 =" << marks[4] << endl;
        cout << "Subject-6 =" << marks[5] << endl;
        cout << "Total Mark =" << totalMark << endl;
        cout << "Average Mark =" << avgmark << endl;
    }
};

int main()
{
    Student students;

    cout << "Enter the details for Student:" << endl;
    students.assignValue();

    cout << "The details of the Student:" << endl;
    students.show();

    return 0;
}