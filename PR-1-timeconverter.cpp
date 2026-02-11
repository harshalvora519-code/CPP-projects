#include <iostream>
using namespace std;

class Timeconverter{
  public:
    void totime(int totalseconds){
        int h=totalseconds / 3600;
        int m=(totalseconds%3600)/60;
        int s=totalseconds%60;
        cout<<"HH:MM:SS: => "<<h<<":"<<m<<":"<<s<<endl;
    }
    
     void toseconds(int h, int m, int s){
     
         int total = (h * 3600) + (m * 60) + s;
         cout<<"total seconds:"<<total<<endl;
     } 
    };
    
    int main(){
        Timeconverter obj;
        int choice;
        cout<<"1.seconds to time\n2.time to seconds\nchoose:";
        cin>>choice;
        
        if(choice == 1){
            int sec;
            cout<<"enter total seconds:";
            cin>>sec;
            obj.totime(sec);
        }
        else if (choice == 2){
            int h,m,s;
            cout<<"enter hours:";cin>>h;
            cout<<"enter minutes:";cin>>m;
            cout<<"enter seconds:";cin>>s;
            obj.toseconds(h,m,s);
        }
    }

/*
output:
 1.seconds to time
 2.time to seconds
 choose:1
 enter total seconds:15000
 HH:MM:SS: => 4:10:0
 
 choose:2
 enter hours:4
 enter minutes:30
 enter seconds:50
 total seconds:16250

*/
