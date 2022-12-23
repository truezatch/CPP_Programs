#include<iostream>
using namespace std;

#define MAX_LETTER 20

class District{

    public  : int dist_code , area_sqft , population , lit_rate;
              string dist_name;
    
    public  :
              void Accept(int i);
              void Display(int i);
              void high_lit_rate();
              void least_pop();
};

void District :: Accept(int i) {
    
    cout<<"\n**********District No."<<i<<"**********"<<endl;

    cout<<"\nEnter District No."<<i<<" Code : ";
    cin>>dist_code;
    
    cout<<"\nEnter District No."<<i<<" Name : ";
    cin>>dist_name;
    
    cout<<"\nEnter District No."<<i<<" Area Sq.Ft   : ";
    cin>>area_sqft;
    
    cout<<"\nEnter District No."<<i<<" Population   : ";
    cin>>population;

    cout<<"\nEnter District No."<<i<<" Litracy Rate : ";
    cin>>lit_rate;

}

void District :: Display(int i) {

    cout<<"\n\n**********District No."<<i<<" Details*********"<<endl;

    cout<<"\nDistrict Code         : "<<dist_code<<endl;
    
    cout<<"\nDistrict Name         : "<<dist_name<<endl;
    
    cout<<"\nDistrict Area Sq.Ft   : "<<area_sqft<<endl;

    cout<<"\nDistrict Population   : "<<population<<endl;

    cout<<"\nDistrict Litracy Rate : "<<lit_rate<<endl;
}

void District :: least_pop() {

    int temp = 0;

    if(temp > population) {

      temp = population;
    }
}

int main() {

    int n , i , j , smallest ;
    string name;
    cout<<"How many District's Details you want to Enter ? : ";
    cin>>n;

    District dist[n];

    for(i = 0; i < n; i++) {
        
        int count = i+1;

        dist[i].Accept(count);

    }

    for(i = 0; i < n; i++) {
        
        int count = i+1;

        dist[i].Display(count);
    }
    //first way of finding the smallest 
    smallest = dist[0].population;

    j = 0;

    for(i = 0; i < n; i++) {

          if(smallest > dist[i].population) {
            
            smallest = dist[i].population;

            j = i;
          }
          
          name = dist[j].dist_name;
  
    }
    
    cout<<"\n"<<name<<" Has the least population ."<<endl;

    //second way 
    j = 0;

    for(i = 0; i < n; i++) {

        if(dist[j].lit_rate < dist[i].lit_rate) {

            j = i;
        }
          name = dist[j].dist_name;

    }
 
    cout<<"\n"<<name<<" Has the higest lit rate ."<<endl;
    

return 0;
}
