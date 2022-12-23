#include<iostream>
using namespace std;
//defult arguments .

float area(float radius , float pi = 3.14) {        // here pi is a default value always set default at last
                                                    //so that it doesnt get it value replaced .
    float answer = 0.0;

    answer = pi * radius * radius;

    return answer;
}

int main() {

    float ans = 0.0;

    ans = area(4.7 , 3.15);     //pi will become 3.15 .

    cout<<"\n"<<ans;

    ans = area(4.7);            //pi will be taken as 3.14 .

    cout<<"\n"<<ans;

return 0;
}