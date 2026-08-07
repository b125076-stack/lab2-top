#include<iostream>
using namespace std;
class car {

    string brand;
    int car_no;
    int yearmodel;
    public:
    void input(){
        cout<<" enter the carnumber";
        cin >> car_no;
        cout<<"enter the brandname";
        cin >> brand;
        cout<<" enter the yearmodel";
        cin >> yearmodel;

    }
    void display()
{       cout<<" !! car details !!";
        cout<<" the carnumber is "<< car_no<<endl;
        cout<<" the brand of car is"<<brand  <<endl;
        cout<<" the yearmodel"<<yearmodel<<endl;

    
    }
};
int main(){
    car c;
    c.input();
    c.display();
    return 0;
}