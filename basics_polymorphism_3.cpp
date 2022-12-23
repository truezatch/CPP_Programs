#include<iostream>
#include<string.h>
using namespace std;
//operator overloading . by overloading an operator you can make it do different things
class Demo {

    public :string name; int num;

            Demo(string Name , int Num) {

                name = Name;
                num  = Num;
            }

};
//must use operator name and then specify the operator then the arguments here ostream is like a data type .
//if you want to use it multiple times instead of void it should return the operator reference.
ostream& operator<<(ostream& COUT , Demo Obj) {

    COUT<<"name : "<<Obj.name<<endl;
    COUT<<"Num  : "<<Obj.num<<endl;

return COUT;
}

int main() {

    Demo obj("Zatch" , 7);
    Demo obj2("Walter" , 8);
    //first method .
    cout << obj << obj2;
    //second method . but first is better .
    operator<<(cout , obj);

return 0;
}
