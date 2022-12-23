#include<iostream>
using namespace std;

class num1 {

    public :
            num1(int I) { 
                
                int i = I;
            }

};

class num2{

    public : int j = 2;

            void add(int i) {

                cout<<i+j;

            }

};

int main() {

    int i;

    num2 obj2;

    

    obj2.add(i);

return 0;
}