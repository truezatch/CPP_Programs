#include<iostream>
using namespace std;

#define MAX_MONTHS 12

class Date {

      private : int dd , mm , yy;
                string months [MAX_MONTHS] = 
                {"Jan" , "Feb" , "Mar" , "Apr" , "May" , "Jun" , "Jul" , "Aug" , "Sep" , "Oct" , "Nov" , "Dec"};
                string month_txt;

      public  : 
                
                Date(int d , int  m , int y) {

                    dd = d;
                    mm = m;
                    yy = y;

                }

                void month_finder(){

                    int i , which_month = mm;

                    for(i = 0; i < 12; i++) {

                        if(which_month == i+1) {

                          month_txt = months[i];

                        }
                    }

                };

                void Display () {

                    cout<<"\n**********DATE**********"<<endl;
  
                    cout<<"\n"<<dd<<"-"<<month_txt<<"-"<<yy<<"\n\n"<<endl;
                }

};

class Mobile : public Date {

      private : int mob_id , mob_price;
                string mob_name;

      public  : 
                Mobile (int id , int price , string name) : Date(0 , 0 , 0){

                    mob_id = id;
                    mob_name = name;
                    mob_price = price;

                }

                void Display () {

                    cout<<"\n**********Mobile Details**********"<<endl;
  
                    cout<<"\nMobile Name : "<<mob_name<<endl;

                    cout<<"Mobile ID     : "<<mob_id<<endl;

                    cout<<"Mobile Price  : "<<mob_price<<endl;

                }

                ~Mobile() {};

};

int main() {

    int id , price , dd , mm , yy;
    string name;

    cout<<"\n\n**********Enter Mobile Details**********"<<endl;

    cout<<"Enter Mobile Name : ";
    cin>>name;
    
    cout<<"Enter Mobile ID : ";
    cin>>id;

    cout<<"Enter Mobile Price : ";
    cin>>price;

    cout<<"Enter Date in (dd mm yy) format : ";
    cin>>dd>>mm>>yy;

    Mobile *details = new Mobile(id , price , name);
    Date date(dd , mm , yy);

    details->Display();

    date.month_finder();

    date.Display();

delete(details);
return 0;
}
