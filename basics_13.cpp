#include<iostream>
using namespace std;

class Base {

      public : int i , j;

               Base(int x  /*int y*/) {

                    i = x;
                    j = 0;
               };
};

class Derived : public Base {

      public : int a , b;
               
               Derived() : Base(10) {

                    a = b = 0;

               }

               Derived(int m , int n) : Base(m ){

                    a = n;      

               }

};

int main() {

    Base bobj(33 );
    Derived dobj(22 , 11);

    cout<<bobj.i<<" , "<<bobj.j<<" , "<<dobj.i<<" , "<<dobj.a;

return 0;
}
