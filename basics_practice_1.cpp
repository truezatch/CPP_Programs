#include<iostream>
using namespace std;

class Even_or_odd {

    private : int *array; 
              int size;
    public : int i;
            //Even_or_odd();
            Even_or_odd(int);   //parameterized .
            Even_or_odd(Even_or_odd&);//copy .
            ~Even_or_odd();
            void Accept();
            void Display();
            void Display_even();
            void Display_odd();
            void delete_();
              
};

Even_or_odd::Even_or_odd(int lenth){
        
    size = lenth;
    array = new int[lenth];
}
//copy constructor
Even_or_odd :: Even_or_odd(Even_or_odd &ref) {

    size = ref.size;    //since size is allocated in obj 2 which we are copying in ref we now again have to allocate size & array .
    
    array = new int[size];

    for(i = 0; i < size; i++) {

        array[i] = ref.array[i];

    }
}
//deconstructor
Even_or_odd :: ~Even_or_odd() {

    //delete[]array;

}
//deletes the array saved int the first obj1 .
void Even_or_odd :: delete_() {

    delete[]array;

}

void Even_or_odd :: Accept() {

    for(i = 0; i < size; i++) {

        cout<<"Enter number ("<<size-i<<" left ) : ";
        cin>>array[i];
    }
    
}

void Even_or_odd :: Display() {

    for(i = 0; i < size; i++) {

        cout<<array[i]<<" ";
    }
}

void Even_or_odd :: Display_even() {

    cout<<"\nEven numbers are : ";

    for(i = 0; i < size; i++) {

        if(array[i] % 2 == 0) {

        cout<<array[i]<<" ,";
        }  
    }
}

 void Even_or_odd :: Display_odd() {

    cout<<"\nOdd numbers are : ";

    for(i = 0; i < size; i++) {

        if(array[i] % 2 != 0) {

          cout<<array[i]<<" ,";
        }  
    }

    cout<<"\n\n";
} 

int main() {

    int size;

    cout<<"How many numbers you want to enter : ";
    cin>>size;

    //parameterized 
    Even_or_odd obj1(size);
    //accpets obj1 .
    obj1.Accept();
    //displays pbj1 .
   // obj1.Display();
    //copies obj1 in obj2 .
    Even_or_odd obj2(obj1);

    obj1.delete_();
    //displays obj2 .
    obj2.Display();

    obj2.Display_even();
    obj2.Display_odd();

return 0;
}
