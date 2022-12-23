#include<iostream>
#include<string.h>
using namespace std;

#define MAX 20

class String {

    private : char s1[MAX] , s2[MAX];
              int lenth;

    public  : 
              void Accept();

              void String_len();

              void String_con();

              void String_rev();

              void String_compare();

};

void String :: Accept() {

    cout<<"Enter First String : ";
    cin>>s1;

    cout<<"Enter Second String : ";
    cin>>s2;

}

void String :: String_len() {

    lenth = strlen(s1);

    cout<<lenth<<endl;

}

void String :: String_rev() {

    int i , len = lenth/2;

    for(i = 0; i < len; i++) {
        
        int rev = (lenth - 1) - i;
        
        char temp;
        
        temp = s1[i];
        s1[i] = s1[rev];
        s1[rev] = temp;

    }
        cout<<s1<<endl;
}

void String :: String_con() {

    strcat(s1 , s2);

    cout<<s1<<endl;

}

int main() {
  
  String obj;
  
  obj.Accept();
  obj.String_len();
  obj.String_rev();
  obj.String_con();

  char name[20] = "hello";

  cout<<name;

  int lenth = strlen(name);

  cout<<lenth<<endl;

return 0;
}
