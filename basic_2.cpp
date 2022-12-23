#include<iostream>
using namespace std;

class comparison {

    public  : int x; int y; int z;

    private : int result;

    public  : void takeinput(); 
              void minimum();
              void maximum();
              void display();

};

void comparison::takeinput() {      // :: is used to access a member form a class but the member
                                    // should be global(public) class_name::member
    cout<<"\nEnter x : ";
    cin>>x;        //c out(cout) is for output display or just output .

    cout<<"\nEnter y : ";
    cin>>y;

    cout<<"\nEnter z : ";
    cin>>z;

}

void comparison::minimum() {

    if((x <= y) && (x <= z)) {

        result = x;
    }
    else if((y <= x) && (y <= z)) {

        result = y;
    }
    if((z <= y) && (z <= x)) {

        result = z;
    }
}

void comparison::maximum() {

    if((x >= y) && (x >= z)) {

        result = x;
    }
    else if((y >= x) && (y >= z)) {

        result = y;
    }
    if((z >= y) && (z >= x)) {

        result = z;
    }
}

void comparison::display() {

    cout<<"Result = "<<result<<"\n";
}

int main() {

    comparison obj1;    //for minimum .
    comparison obj2;    //for maximum .

    obj1.takeinput();
    obj1.minimum();
    obj1.display();

    obj2.takeinput();
    obj2.maximum();
    obj2.display();

return 0;
}