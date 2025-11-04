#include<iostream>
using namespace std;

class Location{

    float latitude, longitude;

    public:
        Location(){
            latitude = longitude = 0;
        };
        Location(float a, float b){
            latitude = a;
            longitude = b;
        };
        void display(){
            cout<<"Latitude: "<<latitude<<"  "<<"longitude: "<<longitude<<endl;
        };

        Location operator * (Location);
};

Location Location :: operator * (Location L){
    Location temp;

    temp.latitude = latitude * L.latitude;
    temp.longitude = longitude * L.longitude;

    return(temp);
};

int main(){
    Location L1(12.5, 75.2);
    Location L2(65.2, 45.25);
    Location L3;
    L3 = L1 * L2; 

    cout<<"L1 = ";
    L1.display();
    cout<<"L2= ";
    L2.display();
    cout<<"L3 =";
    L3.display();

    return 0;
}