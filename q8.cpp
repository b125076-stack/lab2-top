#include<iostream>
using namespace std;
class hostelfee{
    string student_name;
    int id,months;
    float monthyfee,totalfee;
    char delayed;
    public:
    void input(){
        cout<<"enter the student_name:";
        cin>>student_name;
        cout<<" enter id :";
        cin>>id;
        cout<<"enter the no. of months";
        cin>>months;
        cout<<"payment delayed? (y/n)";
        cin>>delayed;


    }
    void calculate(){
        totalfee = monthyfee * months;
        if(delayed == 'y'|| delayed == 'n')
        totalfee+=500;

        
    }
    void display(){
        cout<<"\n students name"<<student_name<<endl;
        cout<<"\n hostel id"<<id<<endl;
        cout<<"\n months "<<months<<endl;
    }

};
    int main(){
        hostelfee f;
        f.input();
        f.calculate();
        f.display();
        return 0;
    }