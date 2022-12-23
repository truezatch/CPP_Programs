#include<iostream>
using namespace std;

class MRP;//market price
//wholesale price
class WSP {

    protected : int wprice;

    public  :
             WSP(int WPrice) {

                 wprice = WPrice;
             }

    private :
             friend void prof(MRP , WSP);
};
//holds the mrp
class MRP {

    protected : int mrp;

    public  : 
             MRP(int Mrp) {

                mrp = Mrp;
             }

    private : 
             friend void prof(MRP , WSP);
};
//is a friend function which produces result
void prof(MRP m , WSP w) {

    int res = w.wprice - m.mrp;

    cout<<res<<endl;
}
//inherts the wholesale and mr price and holds the details of the products
class Product_info : public WSP , MRP{

    private : string product_name;

    public  : 

              Product_info(string name , int temp_mrp , int temp_w) : MRP(temp_mrp) , WSP(temp_w){

                  product_name = name;
              }

              void Display();

};
//accepts data
void Accept(string *pro_ptr , int *mptr , int *wptr) {
  
    cout<<"Enter Product Name    : ";
    cin>>*pro_ptr;

    cout<<"Enter Wholesale Price : ";
    cin>>*wptr;

    cout<<"Enter Market Price    : ";
    cin>>*mptr;
}
//Displays data
void Product_info :: Display() {

    printf("|\tProduct\t|\tWholeSale Price\t|\tM.R.P\t|");
    printf("\n_______________________________________________________\n");
    cout<<"\t"<<product_name<<"\t|";
    cout<<"\t"<<wprice<<"\t\t|";
    cout<<"\t"<<mrp<<"\t|";

}

int main() {
    
    string pro_name[10];
    int market_p , wholesale_p;

//    Accept(&pro_name , &market_p , &wholesale_p);

    Product_info pro_obj("Shampoo" , 45 , 67);

    WSP wspobj(market_p);
    MRP mrpobj(wholesale_p);

    prof(mrpobj , wspobj);

    pro_obj.Display();

return 0;
}
