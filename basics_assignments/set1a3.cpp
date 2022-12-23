#include<iostream>
using namespace std;

class operation {

    public : int x , y , res; char choice;

            void takeinput() {

                cout<<"Enter value of x : ";
                cin>>x;

                cout<<"Enter value of y : ";
                cin>>y;

                cout<<"What operation would you like to perform(+ , - , *, / . !) : ";
                cin>>choice;

            }

            void menu() {

                switch(choice) {

                    case '+' : res = x + y;
                                break;

                    case '-' : res = x - y;
                                break;

                    case '*' : res = x * y;
                                break;

                    case '/' : res = x / y;
                                break;

                    case '!' : int  i;
                                res = 1;
                               for(i = x; i >= 1; i--) {

                                res *= i; 
                    
                               }
                                break;

                    default  : cout<<"Invalid Operation .";
                                break; 
                }
            }

            void display() {
                
                if( choice == '!' ) {

                    cout<<"\n"<<x<<choice<<" = "<<res;

                }
                else {
                
                    cout<<"\n"<<x<<" "<<choice<<" "<<y<<" = "<<res;

                }
            }

};

int main() {

    operation obj;

    obj.takeinput();
    obj.menu();
    obj.display();

return 0;
}