#include<iostream>
using namespace std;

#define PI 3.14

class Cylinder {

    public :float radius , height;
            
            Cylinder(float r , float h) {

                height = h;
                radius = r;

            }

            float area_of_cylinder(const float pi = PI) {

                float area = (2 * pi * radius * height) + (2 * pi * radius * radius);

                return area;
            }

            float volume_of_cylinder(const float pi = PI) {

                float volume = pi * radius * radius * height;

                return volume;

            }
};

int main() {

    float radius , height , area , volume;

//    Cylinder for_area;
//    Cylinder for_volume;

    cout<<"Enter Radius of the Cylinder : ";
    cin>>radius;
    
    cout<<"Enter Height of the Cylinder : ";
    cin>>height;

    Cylinder for_area(radius , height);
    Cylinder for_volume(radius , height);

    area = for_area.area_of_cylinder();
    
    volume = for_volume.volume_of_cylinder();

    cout<<"Area = "<<area;
    
    cout<<"\n Vloume = "<<volume;

return 0;
}
