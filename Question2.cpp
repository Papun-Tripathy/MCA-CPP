/*
Write a C++ program to add and subtract two times.
*/

#include<iostream>
using namespace std;

class Time{
    short hour,minute,second;
    
    public:
    void setTime(){
        cout<<"Hour: ";
        cin>>hour;
        cout<<"Minute: ";
        cin>>minute;
        cout<<"Second: ";
        cin>>second;

        if(minute > 59){
            hour += minute/60;
            minute = minute%60;
        }
        if(second > 59){
            minute += second/60;
            second = second%60;
        }
    }
    
    Time add(Time t){
        Time result;
        result.second = second + t.second;
        result.minute = minute + t.minute;
        result.hour = hour + t.hour;

        if(result.second>59){
            result.minute+=result.second/60;
            result.second=result.second%60;
        }
        if(minute>59){
            result.hour+=result.minute/60;
            result.minute=result.minute%60;
        }
        return result;
    }
    
    Time subtract(Time t){
        Time r;
        r.second = second -t.second;
        r.minute = minute -t.minute;
        r.hour = hour -t.hour;
        
        if(r.second<0){
            r.minute-=1;
            r.second+=60;
        }
        if(r.minute<0){
            r.hour-=1;
            r.minute+=60;
        }
        return r;
    }
    
    void display(){
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
};

int main(){
    Time t1,t2,t3;
    cout<<"Enter Time 1: "<<endl;
    t1.setTime();
    cout<<"Enter Time 2: "<<endl;
    t2.setTime();

    t3 = t1.add(t2);
    cout<<"Time 1 + Time 2 = ";
    t3.display();
    
    t3 = t1.subtract(t2);
    cout<<"Time 1 - Time 2 = ";
    t3.display();
    return 0;
}