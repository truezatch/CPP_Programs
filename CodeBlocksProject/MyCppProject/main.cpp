#include <iostream>

using namespace std;

class Vehicles{
    private:string name;
    private:int Seats;
    private:string engineName;

    public :
            void Vehicles(string name , int seats , string engine){
                engineName = engine;
                name = name;
                Seats = seats;
            };
            void getVehicleDetails();
};




int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
