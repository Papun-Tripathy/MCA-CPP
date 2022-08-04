/*
Write a C++ program to add and subtract matrices a[2][3]={{1,2,3},{4,5,6}} and
b[2][3]={{7,8,9},{2,1,7}} using friend function
*/

#include<iostream>
using namespace std;

class Matrix{
    int arr[2][3];

    public:
    Matrix(){}

    Matrix(int a[2][3]){
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                arr[i][j]=a[i][j];
            }
        }
    }

    void showMatrix(){
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    friend Matrix add(Matrix m1,Matrix m2);
    friend Matrix subtract(Matrix m1,Matrix m2);

};

Matrix add(Matrix m1,Matrix m2){
    Matrix result;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            result.arr[i][j]=m1.arr[i][j]+m2.arr[i][j];
        }
    }
    return result;
}

Matrix subtract(Matrix m1,Matrix m2){
    Matrix result;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            result.arr[i][j]=m1.arr[i][j]-m2.arr[i][j];
        }
    }
    return result;
}

int main(){

    int a[2][3]={{1,2,3},{4,5,6}};
    int b[2][3]={{7,8,9},{2,1,7}};
    
    Matrix m1(a);
    Matrix m2(b);
    Matrix result;
    
    result=add(m1,m2);
    cout<<"Addition of two matrices:"<<endl;
    result.showMatrix();
    
    result=subtract(m1,m2);
    cout<<"Subtraction of two matrices:"<<endl;
    result.showMatrix();
    
    return 0;
}

