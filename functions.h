

#define FUCNTION_H

#include <iostream>

#include <string>

#include <stdlib.h>

#include <fstream>

#include "vehicle.cpp"

#include "vehicle.h"

#include <vector>

using namespace std;

vector<vehicle> veh(10);

int inInd;

//DISPLAY VEHICLE INFORMATION

void displayInventory()

{
    
    cout<<"DISPLAYING THE VEHICLES INFORMATION IN THE INVENTORY:"<<endl;
    
    for(int k1 = 0; k1 < veh.size(); k1++)
        
    {
        
        cout << "VIN:"<<veh[k1].getvin();
        
        cout << "\t MAKE:"<<veh[k1].getmake();
        
        cout << "\t MODEL: "<<veh[k1].getmodel();
        
        cout << "\t YEAR:"<<veh[k1].getyear();
        
        cout << "\t PRICE: "<<veh[k1].getprice();
        
        cout<<endl;
        
    }
    
}




//ADD VEHICLES TO THE INVENTORY

void addToInventory()

{
    
    int useIn;
    
    string vin;
    
    string make;
    
    string model;
    
    int year;
    
    double price;
    
    int cntIn=0;
    
    
    
    do
        
    {
        
        //GET MODEL,VIN,MAKE,YEAR,PRICE OF THE VEHICLE THEN ADD IT TO THE INVENTORY
        
        cout << "Please enter vehicle information" << endl;
        
        cout << "Enter vehicle vin number: " <<endl;
        
        cin >> vin;
        
        cout << "Enter vehicle make: " << endl;
        
        cin >> make;
        
        cout << "Enter vehicle model: \n";
        
        cin >> model;
        
        cout << "Enter vehicle year: \n";
        
        cin >> year;
        
        cout << "Enter vehicle price: \n";
        
        cin >> price;
        
        veh.push_back(vehicle(vin,make,model,year,price));
        
        cntIn++;
        
        //ASK USER WHETHER THEY WANT TO ADD ONE MORE VEHICLE IN THE INVENTORY
        
        cout << "Enter 1 if you want to enter more data and 2 if you want to exit? (1/2) ";
        
        cin >> useIn;
        
    }while ((useIn) == 1&&cntIn<=10);
    
}

//UPDATE THE VEHICLE DETAILS IN THE INVENTORY

void updateInventory()

{
    
    string vin;
    
    string make;
    
    string model;
    
    int year;
    
    double price;
    
    int usINP;
    
    cout << "UPDATION OF VEHICLE IN THE INVENTORY.\n\n";
    
    //GET THE INDEX NUMBER OF VEHICLE TO UPDATE
    
    cout << "SELECT AN INDEX NUMBER:\n\n";
    
    displayInventory();
    
    cin >> inInd;
    
    inInd = inInd - 1;
    
    //WHAT INFORMATION THEY WANT TO UPDATE
    
    cout << "WHAT DO YOU WANT TO UPDATE?\n\n";
    
    cout << "1: Vehicle VIN \n \n";
    
    cout << "2: Vehicle MAKE \n \n";
    
    cout << "3: Vehicle MODEL \n \n";
    
    cout << "4: Vehicle YEAR \n \n";
    
    cout << "5: Vehicle PRICE \n \n";
    
    cin>>usINP;
    
    switch (usINP)
    
    {
            
        case 1:
            
            cout << "ENTER VIN: " << endl;
            
            cin>>vin;
            
            veh[inInd].setvin(vin);
            
            break;
            
        case 2:
            
            cout << "ENTER MAKE: " << endl;
            
            cin >>make;
            
            veh[inInd].setmake(make);
            
            break;
            
        case 3:
            
            cout << "ENTER MODEL: " << endl;
            
            cin >> model;
            
            veh[inInd].setmodel(model);
            
            break;
            
        case 4:
            
            cout << "ENTER UPDATED YEAR: " << endl;
            
            cin >>year;
            
            veh[inInd].setyear(year);
            
            break;
            
        case 5:
            
            cout << "ENTER NEW PRICE: " << endl;
            
            cin >> price;
            
            veh[inInd].setprice(price);
            
            break;
            
        default:
            
            cout << "INVALID CHOICEn";
            
            break;
            
    }
    
}

//DELETE A VEHICLE FROM THE INVENTORY

void deleteInventory()

{
    
    cout << "DELETING INVENTORY \n\n";
    
    cout << "SELECT AN INDEX TO DELETE AN inventory:\n\n";
    
    displayInventory();
    
    cin >> inInd;
    
    inInd = inInd - 1;
    
    veh.erase(veh.begin()+inInd);
    
}

//SORT VEHICLES IN THE INVENTORY BY VIN

void sortVehicle()

{
    
    vehicle tempVeh;
    
    int vehSize = (int)veh.size();
    
    for (int k1 = 0; k1 < vehSize; k1++)
        
    {
        
        if (veh[k1 + 1].getvin() < veh[k1].getvin())
            
        {
            
            tempVeh = veh[k1];
            
            veh[k1] = veh[k1 + 1];
            
            veh[k1 + 1] = tempVeh;
            
        }
        
    }
    
}

//SEARCH THE INVENTORY FOR THE GIVEN MODEL

void searchInventory()

{
    
    int vehSize = (int)veh.size();
    
    string sea_Model;
    
    cout << "ENTER THE MODEL YOU WANT TO SEARCH " << endl << endl;
    
    cin >> sea_Model;
    
    for (int k1 = 0; k1< vehSize; k1++)
        
    {
        
        if (veh[k1].getmake() ==sea_Model)
            
        {
            
            cout << "MODEL IS FOUND AT "<<k1<<endl;
            
        }
        
    }
    
}

//WRITE VEHICLE DETAILS INTO FILE

void writeInventory()

{
    
    ofstream invFile("inventoryVehicle.txt");
    
    string vin;
    
    string make;
    
    string model;
    
    int year;
    
    double price;
    
    for(int k1=0;k1<veh.size();k1++)
        
    {
        
        vin=veh[k1].getvin();
        
        make=veh[k1].getmake();
        
        model=veh[k1].getmodel();
        
        year=veh[k1].getyear();
        
        price=veh[k1].getprice();
        
        invFile<<vin<<"\t"<<make<<"\t"<<model<<"\t"<<year<<"\t"<<price<<endl;
        
    }
    
}

//READ VEHICLE INFORMATION FROM FILE AND DISPLAY IT

void readInventory()

{
    
    ifstream invFile("inventoryVehicle.txt");
    
    string vin;
    
    string make;
    
    string model;
    
    int year;
    
    double price;
    
    while(invFile>>vin>>make>>model>>year>>price)
        
    {
        
        
        
        cout<<vin<<"\t"<<make<<"\t"<<model<<"\t"<<year<<"\t"<<price<<endl;
        
    }
    
}
