#include <iostream>
#include <string>

using namespace std;

#ifndef vehicle_HEADER

#define vehicle_HEADER

class vehicle

{
    
private:
    
    string vin;
    
    string make;
    
    string model;
    
    int year;
    
    double price;
    
public:
    
    vehicle();
    
    vehicle(string, string, string, int, double);
    
    string getvin() const;
    
    string getmake() const;
    
    string getmodel() const;
    
    int getyear() const;
    
    double getprice() const;
    
    void setvin(string input);
    
    void setmake( string input);
    
    void setmodel( string input);
    
    void setyear(int year);
    
    void setprice(double price);
    
};

#endif

