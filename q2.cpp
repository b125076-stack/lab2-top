#include<iostream>
using namespace std; 

    class square 
    {
        float side;
        public:
        void input()
        {
            cout<< " enter the side";
            cin>> side;

        }
        void display()
        {
            cout<<" the area ="<< side * side<< endl;
            cout<<" perimeter ="<< 4*side<< endl;

        }
    };
    int main(){
        square s;
        s.input();
        s.display();
        return 0;
    }