#include <iostream>
#include <string.h>

#include "./data/routers.h"
#include "./modules/Date/controllers.h"
#include "./modules/Ticket/controllers.h"
#include "./modules/Airplane/controllers.h"
#include "./modules/Flight/controllers.h"
#include "./modules/Passenger/controllers.h"
#include "./utils/Mylibrary.h"
#include "./utils/UserInterface.h"
#include "./types/KeyValue.h"

using namespace std;

void MainMenu();

int main(){
    fullScreen();
    MainMenu();
    return 0;
}

void MainMenu() {
    ListAir listAir;
    InitListAirplane(listAir); 
    PNodeFli listFlight = NULL;
    TreePass rootPass = NULL;
    
    if(!LoadFlight(listFlight));
	if(!LoadAirplane(listAir));
	if(!LoadTreePass(rootPass));
	
    while (true) {
    	Clear();
        gotoxy(X_TitlePage-1,Y_TitlePage-1);
	    std::cout << "HANG HANG KHONG PTITHCM";
        int tt = MenuSelect(X_Menu, Y_Menu,7, ContentMenu);
        switch(tt) {
            case 1: //Home
                break;
            case 2: //Airplane
            {
            	RemoveBox(X_Menu, Y_Menu, 20, 15);
                MenuManageAirplane(listAir);
                break;
            }
            case 3: // Flight
            {
            	RemoveBox(X_Menu, Y_Menu, 20, 15);
            	MenuManageFlight(listFlight,listAir,rootPass);
                break;	
			}
            case 4: // Passenger
            {
            	RemoveBox(X_Menu, Y_Menu, 20, 15);
            	MenuManagePassenger(rootPass);
                break;	
			}
            case 5: // Ticket
            {
	           	RemoveBox(X_Menu, Y_Menu, 20, 15);  	
				MenuManageListTicket(listAir,listFlight,rootPass);
				break;
            }
            case 6: // List
            {
            	RemoveBox(X_Menu, Y_Menu, 20, 15);
            	ListAirplaneFly(listFlight,listAir);
            	break;
			}
            default: //Exit
                return;
        }
    }
}
