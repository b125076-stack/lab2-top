#include<iostream>
using namespace std;

    class cricketplayer{
        string name;
        int matchs,runs;
        float avg;
        public:
        void input (){
            cout<<" enter the player:";
            cin>>name;
            cout<<"enter the run of player:";
            cin>>runs;
            cout<<"enter the no of matchs player";
            cin>>matchs;

        }
        void calculate(){
            avg=(float)runs/matchs;

        }
        void display()
        {
            cout<<"batting_avg"<< avg<<endl;
            if(avg>=50)
             cout<<"per: excellent";
            else if(avg>=35)
            cout<<"per:good";
            else if(avg>=20)
            cout<<"per:average";
            else
            cout<<"per:poor";
        }


        
    };
    int main(){
        cricketplayer c ;
        c.input();
        c.calculate();
        c.display();
            return 0;
    }