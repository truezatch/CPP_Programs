#include<iostream>
using namespace std;

void func(int);         //cannot create a referance to a func if it is not inisilized first
void (&ref_func)(int) = func;   //creating func referance .

void func(int &ref) {       //function accepting a variable and creating a referance of it (&ref = variable);

    ref = 10;
}

int main() {

    int x = 10;
    int &ref = x;       //when you do this ref becomes a name for the variable for x as well so now 
                        //content of x is accessable by using ref as well , but pointer needs to be given as in c .

    cout<<"\nX = "<<x;
    cout<<"\nRef = "<<ref;
    //declaring a pointer
    int *ptr = &ref;

    cout<<"\nPtr content = "<<*ptr;
    //a reference for a pointer can aslo be created *(&referance) = pointer;
    int *(&ref_ptr) = ptr;

    int arr[4] = {10 , 20 , 30 , 40};
    int (&ref_of_arr)[4] = arr;     //ref of an array but an array of ref cannot be created .

    int i = 11;

    cout<<"\nbefore func call by reference = "<<i;

    ref_func(i);        //function call by reference & passing a variable .

    cout<<"\nAfter func call by reference = "<<i;

return 0;
}