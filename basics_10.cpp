#include<iostream>
using namespace std;
//static there are no such thing as static constructor , static values are not useable by child/derived class .
class Demo {

  public : int i , j;
           static int x;    //static variable .

           void func(){

                this->i = 0;   //this-> is used to access all the things inside of a class .

           };

           static void gunc() {

                //cannot use non-static variables , members or behaviors  .
                cout<<"\n"<<x;    //this is allowed because x is a static value .

           };

};

int Demo :: x = 10;     //a way of accessing variables outside the class .

int main() {

    Demo obj;

    obj.i = 2;
    obj.j = 4;
    //using a static variable .
    cout<<Demo :: x;  //this wouldnt work if it wasnt static because its memory is allocated during the creation of class not object .
    cout<<"\n"<<obj.i;
    cout<<"\n"<<obj.j;
    //using a static behaviour .
    Demo :: gunc();

    obj.x++;    //it can still be accessed like this . The changes done happens in the class still .
    
    cout<<"\n"<<obj.x;

return 0;
}
