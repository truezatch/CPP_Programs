using namespace std;
#include<iostream>

class arethmatic {          //class
//here public is a access specifier .
    public : int x; int y; int result;    //characteristics

            void add() {        //behavior .

                result = x + y;
            }

            void sub() {

                result = x - y;
            }
};

int main() {

    arethmatic addition;        
    arethmatic subtraction;

    addition.x = 10;
    addition.y = 20;

    subtraction.x = 30;
    subtraction.y = 10;

    addition.add();
    cout<<"Addition of X + Y = "<<addition.result;

    subtraction.sub();
    cout<<"\nSubtraction of X - Y = "<<subtraction.result;

return 0;
}