#include<iostream>
using namespace std;
//dynamic allocation . new is for allocation & delete is to free the memory , there is no in-build way to realloc memory .

int main() {

    int *ptr = new int(11);     //dynamic allocation .
                                //this works same as int *ptr = (*int)malloc(sizeof(int));
    cout<<*ptr;                 //  *ptr = 11;

    delete(ptr);      //free

return 0;
}