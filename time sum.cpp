#include<iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(){                        
       hours = 0;
       minutes = 0;
       seconds = 0;
   }
    Time(int hr, int min, int sec) {       
        hours = hr;
        minutes = min;
        seconds = sec;
   }
    void display(){
        cout<<"Time:  ";
        cout << hours << " Hours " << minutes << " Minutes " << seconds << " Seconds" << endl;
}  
    void add(Time x, Time y) {
        int carry = 0;
        seconds = x.seconds + y.seconds;
         if(seconds > 59){
            seconds -= 60;
            carry++;
       }  
       minutes = x.minutes + y.minutes + carry;
       carry = 0;
       if(minutes > 59){
          minutes -= 60;
          carry++;
       }
          hours = x.hours + y.hours + carry;
       if(hours >= 24)
          hours -= 24;
       cout << "Total Time After Addition: " << hours << " Hours " << minutes << " Minutes " << seconds << " Seconds" << endl;  
    
  }    
};

int main() {
Time time1(20, 50, 30);
Time time2(10, 30, 43);

time1.display();
time2.display();

cout<<"\nAfter Adding: ";
time1.add(time1, time2);
return 0;
}
