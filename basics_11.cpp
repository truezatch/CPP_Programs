#include<iostream>
using namespace std;
//constant behavior , constant objects .
class Demo {

      public : int i , j; const int x;    //constant variable .

               Demo() : x(20) {//defult constructor , the x here is what called a member intilization list check _12 .

                   i = 11;
                   j = 22;

               }

               void func(int y) {

                   i++;//allowed
                  //x++ not allowed
                   j++;

               }

               void gunc(int y) const {   //constant behavior .

                    //i++; not allowed
                    //j++; not allowed
                    //x++;  //x is a constant variable and gunc is a constant behaviour .
                      y++;

               }

               void runc(int a ,const int b) const {

                    int A = 100;
                    const int B = 200;

                    A++;
                  //B++ is not allowed
                    a++;
                  //b++ is not allowed
                  //i++ is not allowed
                  //j++ is not allowed

               }

};

int main() {

    Demo obj;
    const Demo cobj;

    obj.func(11);
    //call of constant behavior by normal object .
    obj.gunc(231);
    obj.run(33 , 44);
    //call of constant behavior by constant objects .
    cobj.gunc(231);
    cobj.run(33 , 44);
    //cobj.func() is not allowed because it is not a constant behavior .

    cout<<obj.i<<"\n"<<obj.j;

return 0;
}
