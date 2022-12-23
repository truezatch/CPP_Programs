#include<iostream>
using namespace std;

class pallin {

    public : int n = 33221;

            void takeinput() {

                cout<<"Enter a number to find out if its a pallindrome : ";
                cin>>n;
            }

            void pallindrome_or_not() {

                int remaining = 1 , pallindrome = 0 , count = 1;

                while(n > 0) {

                    remaining = n % 10;
                    
                    cout<<"\n"<<pallindrome;
                    pallindrome = (pallindrome * 10) + remaining;
                    cout<<"\n"<<pallindrome;

                    n /= 10;

                cout<<"\n"<<remaining;
                cout<<"\n"<<pallindrome;
                }

                cout<<"\n"<<pallindrome;

                if(n == pallindrome) {

                    cout<<n<<" is a Pallindrome .\n";

                }
                else {

                    cout<<n<<" is not a Pallindrome .\n";

                }
            }

};

int main() {

    pallin obj;

    //obj.takeinput();
    obj.pallindrome_or_not();

return 0;
}