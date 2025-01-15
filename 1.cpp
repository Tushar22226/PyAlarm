#include <iostream>
#include <cstring>
using namespace std;

class vehicle{
    public:
        char vehicle[50];
        virtual void vehicleType(){
            cout<<"Parent Class"<<endl;
        }

        virtual void displayDetails(){
            //
        }
};

class bike : public vehicle{
    public:
    void vehicleType(){
        strcpy(vehicle,"bike");
    }
    virtual void displayDetails(){
        cout<<vehicle;
    }
};

class car : public vehicle{
    public:
    void vehicleType(){
        strcpy(vehicle,"car");
    }
    virtual void displayDetails(){
        cout<<vehicle;
    }
};

int main(){
    vehicle *v;
    car c;
    bike b;

    v = &c;
    v->vehicleType();
    v->displayDetails();

    v = &b;
    v->vehicleType();
    v->displayDetails();

    return 0;
}