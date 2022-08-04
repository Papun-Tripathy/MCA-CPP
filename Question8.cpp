/*
Write a C++ program to add, subtract, and product of two matrices of order 3X3 using 
operator overloading
*/
#include<iostream>

using namespace std;

class Matrix{
    int arr[3][3];
    
    public:
    Matrix(){}
    
    void setMatrix(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<"Element ["<<i<<"]["<<j<<"]: ";
                cin>>arr[i][j];
            }
        }
    }
    
    void showMatrix(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    Matrix operator +(Matrix m1);
    Matrix operator -(Matrix m1);
    Matrix operator *(Matrix m1);
};

Matrix Matrix::operator + (Matrix m1){
    Matrix result;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result.arr[i][j]=arr[i][j]+m1.arr[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator - (Matrix m1){
    Matrix result;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result.arr[i][j]=arr[i][j]-m1.arr[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator * (Matrix m1){
    Matrix result;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result.arr[i][j]=0;
            for(int k=0;k<3;k++){
                result.arr[i][j]+=arr[i][k]*m1.arr[k][j];
            }
        }
    }
    return result;
}

int main(){

    Matrix m1, m2;

    cout<<"Enter the elements of matrix 1: "<<endl;
    m1.setMatrix();

    cout<<"Enter the elements of matrix 2: "<<endl;
    m2.setMatrix();

    Matrix add, sub, prod;

    add=m1+m2;
    sub=m1-m2;
    prod=m1*m2;

    cout<<"Addition of M1 + M2: "<<endl;
    add.showMatrix();

    cout<<"Subtraction of M1 - M2: "<<endl;
    sub.showMatrix();

    cout<<"Multiplication of M1 * M2: "<<endl;
    prod.showMatrix();

    return 0;
}
