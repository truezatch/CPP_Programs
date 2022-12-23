#include<iostream>
using namespace std;
//this & that pointer .
class Finding {

      private : int i , size ,*ptr;

      public  : 
                Finding(int);
                
                ~Finding();

                void Accept();
        
                int Occurance(int);

                int search(int);

};

Finding :: Finding(int num) {

    size = num;

    ptr = new int[size];

}

void Finding::Accept() {
    
    //int search_for;

    for(i = 0; i < size; i++) {

        cout<<"Enter Numbers : ";
        cin>>ptr[i];
    }

    //cout<<"What number you want to search ? : ";
    //cin>>search_for<<endl;

    //return search_for;
}

int Finding::search(int num){

  int occurance;

  for(i = 0; i < size; i++) {
      //if the number is found then break out of the loop
      if(ptr[i] == num) {
        
        break;
      }
  }
  if(i == size) {
    //if the array has ended then quit out of the function .
    return -1;
  }
  else {

    occurance = i+1;
  }

  return occurance;
}

int Finding :: Occurance(int num) {
    
    int count = 0;

    for(i = 0; i < size; i++) {

        if(ptr[i] == num)   {

          count++;

        }
    }

return count;
}

Finding :: ~Finding() {};

int main() {
    
    int num , count , search_for , occurs_at;  
    //just like struct in c you can create a pointer directly for the class
    Finding *p = new Finding(size); //the new finding is a constructor

    cout<<"How many numbers you want to Enter : ";
    cin>>num;

    Finding obj(num);

    obj.Accept();

    cout<<"What number you want to search : ";
    cin>>search_for;

    occurs_at = obj.search(search_for);

    count = obj.Occurance(search_for);

    cout<<"\n"<<search_for<<" is at "<<occurs_at<<" position .";

    cout<<"\n"<<search_for<<" occurs "<<count<<" times .";

  return 0;
}
