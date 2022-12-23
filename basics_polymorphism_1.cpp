#include<iostream>
using namespace std;
//polymorphism (overloading) rules : you it doesnt work across classes 
class Demo {

  public ://cannot overload by changing thw access specifer (public , private , protected) .
           int add(int a , int b) {

              return (a + b);
           }
            //can overload by changing the number of aruguments .
           int add(int a , int b , int c) {

              return (a + b + c);
           }
            //can overlaod by changing the data type , but cannot overload by changing the return type .
           double add(double a , int b) {

              return (a + b);
           }
           //can overload by changing the argument order .
           double add(int a , double b) {

              return(a + b);
           }
           //we can also overload signed int (hold + int) & unsiged int (holds - int);
           //we can also overload short int & long int;
           //we can also overload by using a reference (&) , but when passing ita variable it woll throw error .

           //we can also overlaod by using pointers by should be of different data type .
           void func(int *ptr) {

                cout<<*ptr<<endl;
           }

           void func(char *ptr) {

                cout<<*ptr<<endl;
           }

};

int main() {

    int ans1 , ans2 , num = 67;
    double ans3 , ans4;
    char ch = 'A';

    Demo obj1;
    Demo obj2;
    Demo obj3;
    Demo obj4;

    Demo obj5;

    ans1 = obj1.add(3 , 3);
    ans2 = obj2.add(3 , 3 , 3);
    ans3 = obj3.add(3.1 , 3);
    ans4 = obj4.add(3 , 3.4);

    cout<<ans1<<endl;
    cout<<ans2<<endl;
    cout<<ans3<<endl;
    cout<<ans4<<endl;

    cout<<"\nPointer Overloading\n"<<endl;

    obj5.func(&num);//will call the int func()
    obj5.func(&ch); //will call the char func()
    //type casting metod .
    obj5.func((char*)&num);//will call the int func()
    obj5.func((int *)&ch);//will call the char func() , it breaks if the num value is same as ascii valur of the char .
                          
    

return 0;
}
