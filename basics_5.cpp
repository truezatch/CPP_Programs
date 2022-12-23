#include<iostream>
using namespace std;
//inline function .

class demo_inline {

    public : 
            inline void func();     //declartion of inline .

};

void demo_inline::func() {      //inline func only works if the func is not too complicated
                                //it simply here will add the cout<<"Hello "; to main .
    cout<<"Hello ";             //because of which the program will execute faster .
}

int main() {

    demo_inline obj;

    obj.func();

return 0;
}