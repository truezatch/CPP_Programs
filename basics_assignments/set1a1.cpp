#include<iostream>
using namespace std;

class floyd_triangle {

    public : int n , i , j , k = 1;

            void takeinput() {

                cout<<"Enter a number : ";
                cin>>n;
            }

            void triangle() {

                for(i = 1; i <= n; i++) {

                    for(j = 1; j <= i; j++) {

                        cout<<k<<" ";
                        k++;
                    }
                    cout<<"\n";
                }
            }
};

int main() {

    floyd_triangle obj;

    obj.takeinput();
    obj.triangle();

return 0;
}