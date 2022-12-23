#include<iostream>
using namespace std;

class Parent {

    public : 
            void base() {

                cout<<"inside parent class"<<endl;
            }
};

class Child : public Parent {

    public : 
            void derived() {

                cout<<"inside child class"<<endl;
            }
};

int main() {

    Parent pobj;
    Child  cobj;

    //upcasting converting the derived class into parent class .
    //here smaller capacity pointer is pointing at a larger capcity of class which is allowed by the compiler .
    //EXAMPLE : suppose you have 1000 in your accout and you want to withdraw 200 .
    //it is safe to upcast .
    Parent *parent_ptr = &cobj;
    
    //downcasting converting the base class into a derived class .
    //here larger capacity pointer is pointing at a smaller cpacity of data which is not allowed
    //it is unsafe to downcast because the child may or may not have more data then the parent provides so there is chance of date loss .
    //EXAMPLE : suppose you have 200 in your accout and you want to withdraw 1000 .
    //and it needs to be typecasted (changing the datatype) .
    Child *child_ptr = (Child *)&pobj;

    //parent_ptr->derived(); will show no memeber int this pointer .
    parent_ptr->base();
    child_ptr->base();

    child_ptr->derived();

    //we can also do the same thing with references .

    Parent &parref = cobj;
//  this works as well but isnt working at the moment .
//  Child  &chref  = pobj;

    parref.base();

//    chref.base();
//    chref.derived();


return 0;
}
