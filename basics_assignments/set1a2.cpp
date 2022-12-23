#include<iostream>
using namespace std;

class table {

    public : int i , table_of , till;

            void takeinput() {

                cout<<"Table of : ";
                cin>>table_of;

                cout<<"Till "<<table_of<<" * ? : ";
                cin>>till;

            }

            void multiplicaton() {

                for(i = 1; i <= till; i++) {

                    int res;

                    res = table_of * i;

                    cout<<"\n\n"<<table_of<<" * "<<i<<" = "<<res;
                }

                cout<<"\n\n"<<endl;
            }

};

int main() {

    table obj;

    obj.takeinput();
    obj.multiplicaton();   

return 0;
}