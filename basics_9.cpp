#include<iostream>
using namespace std;
//this pointer & Inheritance .
class demo {

    public : int i , j;

           void func() {

                cout<<"Inside demo ";

           }
};

class hello {

    public : int x, y;
             
             demo obj;    //create an object for the demo inside this class .

             void gunc() {

                cout<<"\nInside hello";
              
             }
};

class demo2 {     //Base or Parent class .

    public : int i , j;

           void func2() {

                cout<<"\nInside demo2 ";

           }
};

class hello2 : public demo2  {      //Derived or Child class .

    public : int x, y;
             
             //demo obj2;  now we dont need this we can direclt access any member and behaviour of demo from hello .

             void gunc2() {

                cout<<"\nInside hello2 .";
              
             }
};

int main() {

    demo dobj;
    hello hobj;

    dobj.i = 1;
    dobj.j = 2;

    hobj.x = 3;
    hobj.y = 4;
    //here obj is the object created for the demo class which is inside of hello class .
    hobj.obj.i = 6; //way of accessing nested class .
    hobj.obj.j = 7;

    dobj.func();
    hobj.gunc();

    hobj.obj.func();

    //this above method causes too much complextion in the program so use the below one .
    //this a single level inheritance .
    demo2 dobj2;
    hello2 hobj2;

    dobj2.i = 1;
    dobj2.j = 2;

    hobj2.x = 3;
    hobj2.y = 4;
    
    hobj2.i = 6;
    hobj2.j = 7;

    dobj2.func2();
    hobj2.gunc2();
    hobj2.func2();  // now this is how you can access func inside demo from hello class .

return 0;
}
