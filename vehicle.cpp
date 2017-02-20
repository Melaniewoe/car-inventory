#include "vehicle.h"

vehicle::vehicle()

{
    
    vin = "123";
    
    make = "honda";
    
    model= "2010";
    
    year=2015;
    
    price=10000;
    
}

vehicle::vehicle( string iVin, string iMake, string iModel, int iYear, double iPrice)

{
    
    vin = iVin;
    
    make = iMake;
    
    model = iModel;
    
    year = iYear;
    
    price = iPrice;
    
}

void vehicle::setvin(string input )

{
    
    vin=input;
    
}

void vehicle::setmake( string input)

{
    
    make=input;
    
}

void vehicle::setmodel( string input)

{
    
    model=input;
    
}

void vehicle::setyear(int input)

{
    
    year=input;
    
}

void vehicle::setprice(double input)

{
    
    price=input;
    
}

string vehicle::getvin() const

{
    
    return vin;
    
}

string vehicle::getmake() const

{
    
    return make;
    
}

string vehicle::getmodel() const

{
    
    return model;
    
}

int vehicle::getyear() const

{
    
    return year;
    
}

double vehicle::getprice() const

{
    
    return price;
    
}