#include<iostream>
using namespace std;
//member initialization list .
class Demo {

     public : int i , j;
              int &ref;

              Demo(int x , int y) : ref(x) , j(y) {   //this members list .

                  i = 11;

              }
};

int main() {

    int a = 22 , b = 33;

    Demo obj(a , b);

    cout<<obj.i<<" , "<<obj.ref<<" , "<<obj.j;

return 0;
}
