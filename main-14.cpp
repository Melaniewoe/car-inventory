#include "iostream"

#include "functions.h"

#include <vector>

#include <string>

#include <fstream>

using namespace std;

int main()

{
    
    int usINP;
    
    do
        
    {
        
        //menu to the inventory program
        
        cout << "Please select an operation: \n \n \n";
        
        cout << "1: DISPLAY INVENTORY \n \n";
        
        cout << "2: ADD A VEHICLE \n \n";
        
        cout << "3: UPDATE A VEHICLE \n \n";
        
        cout << "4: DELETE A VEHICLE \n \n";
        
        cout << "5: SORT INVENTORY BY VIN \n \n";
        
        cout << "6: SEARCH INVENTORY FROM MODEL \n \n";
        
        cout << "7: READ INVENTORY FROM FILE \n \n";
        
        cout << "8: WRITE INVENTORY TO FILE AND EXIT \n \n";
        
        cin >> usINP;
        
        switch (usINP)
        
        {
                
            case 1:
                
                displayInventory();
                
                break;
                
            case 2:
                
                addToInventory();
                
                break;
                
            case 3:
                
                updateInventory();
                
                break;
                
            case 4:
                
                deleteInventory();
                
                break;
                
            case 5:
                
                sortVehicle();
                
                break;
                
            case 6:
                
                searchInventory();       
                
                break;
                
            case 7:
                
                readInventory();
                
                break;
                
            case 8:
                
                writeInventory();
                
                break;
                
            default:
                
                cout<<"CHOICE IS NOT VALID"<<endl;
                
                break;
                
        }
        
    } while (usINP <= 8);
    
    system("pause");
    
    return 0;
    
}

