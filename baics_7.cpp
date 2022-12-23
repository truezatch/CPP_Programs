#include<iostream>
using namespace std;

class demo {

    public :int i , j; 
            
            demo();     //default .
            demo(demo& );//copy .
            demo(int);  //parameterized .
            ~demo();    //deconsturct .

};

//default ocnstructor
demo :: demo() {

    i = 0;
    j = 0;
}
//parameterized ocnstructor
demo :: demo(int num) {

    i = num;
    j = num;
}
//copy ocnstructor      takes a construtor and copyies it into this one .
demo:: demo(demo &ref){
     i  = ref.i;
     j  = ref.j;
}
//deconstrutor deinisilizes the constructor .
demo :: ~demo() {

    cout<<"inside data deleted";
}

int main() {

    demo obj;       //default

    demo obj2(11);  //parameterized

    demo obj3(obj2);//copy

return 0;

}   