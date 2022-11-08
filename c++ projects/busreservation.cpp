//BUS RESERVATION SYSTEM
/*
1. Ask the user to register / login
2. Ask from where the user wants to board the bus.
3. Ask for the destination.
4. Ask for the suitable bus timings
5. Display the busses available along with the price and let the user choice.
6. Ask for number of tickets needed.
7. Ask for suitable boarding point,
8. Display (print) the reserved ticket.
*/
/*
Sample Output
==============================================
BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES
==============================================
Name of the customer : Atharva
Bus Boarding from : PUNE
Destination : MUMBAI
Bus Timings: 2:00 PM
Bus Travels : HUMSAFAR
Boarding Point : SWARGATE
No of Tickets: 4
==============================================
Total Price: 2996
==============================================
Thank You for Reserving the Ticket, Visit Again!
==============================================
*/
#include <iostream> 
#include <fstream> // reading and writing files 
#include <string>
#include <ctime>
using namespace std;

bool isLoggedIn()
{
    string username, password;
    string un, pw; // comparison strings

    cout << "Enter a username: ";
    cin >> username; 
    cout << "Enter a password: ";
    cin >> password;

    ifstream read(username + ".txt"); // ifstream reads a file 
    getline(read, un); // reads the username 
    getline(read, pw); // reads the password

    if(un == username && pw == password) // if both un & username and pw & password are the same, true
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice; //login or register choice.
    char name[100]; //name of the customer
    int from, des; //from and destination.
    int board; //boarding point
    int no; //number of tickets
    int bus; //choice of bus
    int sut; //suitable bus timings
    int price; //total price
    int ch; //choice for printing ticket
    time_t tt; //Declaring argument for time
    struct tm * ti; //Declaring variable to store return value of local time
    time (&tt); //applying time
    ti = localtime(&tt); //using localtime

    cout << endl;
    cout << "WELCOME TO THE BUS RESERVATION SYSTEM" << endl;
    cout << "Main Menu: " << endl;
    cout << "-------------------------------" << endl;
    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << endl;
    cout << "Your choice: ";
    cin >> choice; 

    if(choice == 1)
    {
        string username, password;

        cout << "Registration: " << endl;
        cout << endl;
        cout << "Select a username: "; 
        cin >> username;
        cout << "Select a password: ";
        cin >> password;

        ofstream file; // ofstream creates a file
        file.open(username + ".txt"); 
        file << username << endl << password;
        file.close();
        cout << "Welcome " << username << "!" << endl;
    }
    else if(choice == 2) // if user chooses to login
    {
        bool status = isLoggedIn();

        if(!status) // if isLoggedIn() returns false
        {
            system("clear");
            cout << endl;
            cout << "Invalid login!" << endl;
            main();
            return 0;
        }
        else // if isLoggedIn() returns true, the dashboard is displayed
        {
            cout << "Successfully logged in!" << endl;
            cout << endl;
            // Display dashboard:
            cout << "BUS RESERVATION SYSTEM" << endl;
            cout << "WELCOME TO MAHARASHTRA BUS BOOKING SITE" << endl;
            cout << "Enter Customer Name: " << endl;
            cin >> name;
            cout << " Enter from where the Customer wants to board the bus: "<< endl;
            cout << "=====================================" << endl;
            cout << "1. PUNE" << endl;
            cout << "2. MUMBAI" << endl;
            cout << "3. AURANGABAD" << endl;
            cout << "4. NASHIK" << endl;
            cout << "5. BARAMATI" << endl;
            cout << "=====================================" << endl;
            cin >> from;
            switch(from)
            {
                case 1: //from PUNE
                cout << "Enter the destination: " << endl;
                cout << "=====================================" << endl;
                cout << "1. MUMBAI" << endl;
                cout << "2. AURANGABAD" << endl;
                cout << "3. NASHIK" << endl;
                cout << "4. BARAMATI" << endl;
                cout << "=====================================" << endl;
                cin >> des;
                switch(des)
                {
                    case 1: //to Mumbai
                    cout << "Enter the suitable bus timings: " << endl;
                    cout << "=====================================" << endl;
                    cout << "1. 2:00 PM" << endl;
                    cout << "2. 4:00 PM" << endl;
                    cout << "3. 6:00 PM" << endl;
                    cout << "4. 8:00 PM" << endl;
                    cout << "=====================================" << endl;
                    cin >> sut;
                    switch(sut)
                    {
                        case 1: //at 2pm
                        cout << "Enter the choice of Bus: " << endl;
                        cout << "=====================================" << endl;
                        cout << "1. HUMSAFAR TRAVELS (Rs. 749/-)" << endl;
                        cout << "2. VRL TRAVELS (Rs. 725/-)" << endl;
                        cout << "3. VOLVO TRAVELS (Rs. 650/-)" << endl;
                        cout << "4. SRM TRAVELS (Rs. 500/-)" << endl;
                        cout << "=====================================" << endl;
                        cin >> bus;
                        switch(bus)
                        {
                            case 1: //humsafar
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            case 2: //vrl
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : VRL" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : VRL" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : VRL" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : VRL" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            case 3: //volvo
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : VOLVO" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : VOLVO" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : VOLVO" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : VOLVO" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            case 4: //srm
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : SRM" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : SRM" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : SRM" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 2:00 PM" << endl;
                                    cout << "Bus Travels : SRM" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            default:
                            cout << "invalid input" << endl;
                            break;
                        }
                        break;
                        case 2: //at 4pm
                        cout << "Enter the choice of Bus: " << endl;
                        cout << "=====================================" << endl;
                        cout << "1. HUMSAFAR TRAVELS (Rs. 749/-)" << endl;
                        cout << "2. VRL TRAVELS (Rs. 725/-)" << endl;
                        cout << "3. VOLVO TRAVELS (Rs. 650/-)" << endl;
                        cout << "4. SRM TRAVELS (Rs. 500/-)" << endl;
                        cout << "=====================================" << endl;
                        cin >> bus;
                        switch(bus)
                        {
                            case 1: //humsafar
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            case 2: //vrl
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            case 3: //volvo
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            case 4: //srm
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 4:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            default:
                            cout << "invalid input" << endl;
                            break;
                        }
                        break;
                        case 3: //at 6pm
                        cout << "Enter the choice of Bus: " << endl;
                        cout << "=====================================" << endl;
                        cout << "1. HUMSAFAR TRAVELS (Rs. 749/-)" << endl;
                        cout << "2. VRL TRAVELS (Rs. 725/-)" << endl;
                        cout << "3. VOLVO TRAVELS (Rs. 650/-)" << endl;
                        cout << "4. SRM TRAVELS (Rs. 500/-)" << endl;
                        cout << "=====================================" << endl;
                        cin >> bus;
                        switch(bus)
                        {
                            case 1: //humsafar
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            case 2: //vrl
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            case 3: //volvo
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            case 4: //srm
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 6:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            default:
                            cout << "invalid input" << endl;
                            break;
                        }
                        break;
                        case 4: //at 8pm
                        cout << "Enter the choice of Bus: " << endl;
                        cout << "=====================================" << endl;
                        cout << "1. HUMSAFAR TRAVELS (Rs. 749/-)" << endl;
                        cout << "2. VRL TRAVELS (Rs. 725/-)" << endl;
                        cout << "3. VOLVO TRAVELS (Rs. 650/-)" << endl;
                        cout << "4. SRM TRAVELS (Rs. 500/-)" << endl;
                        cout << "=====================================" << endl;
                        cin >> bus;
                        switch(bus)
                        {
                            case 1: //humsafar
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*749;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            case 2: //vrl
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*725;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            case 3: //volvo
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*650;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            case 4: //srm
                            cout << "Enter the suitable boarding point: " << endl;
                            cout << "=====================================" << endl;
                            cout << "1. SWARGATE" << endl;
                            cout << "2. PUNE STATION" << endl;
                            cout << "3. KOREGAON PARK" << endl;
                            cout << "4. MANPA" << endl;
                            cout << "=====================================" << endl;
                            cin >> board;
                            switch(board)
                            {
                                case 1: //swargate
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : SWARGATE" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 2: //pune station
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : PUNE STATION" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 3: //koregaon park
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : KOREGAON PARK" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                case 4: //manpa
                                cout << "Enter the number of tickets : " << endl;
                                cin >> no;
                                price = no*500;
                                cout << "Your Bus ticket is reserved!" << endl;
                                cout << "Would you like to print the ticket?" << endl;
                                cout << "Type 1 for YES and 2 for No" << endl;
                                cin >> ch;
                                switch(ch)
                                {
                                    case 1: //yes
                                    cout << "==============================================" << endl;
                                    cout << "BUS RESERVATION SYSTEM ~ MAHARSHTRA BUSSES" << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Name of the customer : " << name << endl;
                                    cout << "Bus Boarding from : PUNE" << endl;
                                    cout << "Destination : MUMBAI" << endl;
                                    cout << "Bus Timings: 8:00 PM" << endl;
                                    cout << "Bus Travels : HUMSAFAR" << endl; 
                                    cout << "Boarding Point : MANPA" << endl;
                                    cout << "No of Tickets: " << no << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Total Price: Rs. " << price << endl;
                                    cout << "==============================================" << endl;
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    cout << "==============================================" << endl;
                                    break;
                                    case 2: //no
                                    cout << "Thank You for Reserving the Ticket, Visit Again!" << endl;
                                    break;
                                    default:
                                    cout << "Invalid input" << endl;
                                    break;
                                }
                                break;
                                default:
                                cout << "Invalid input" << endl;
                                break;
                            }
                            break;
                            default:
                            cout << "invalid input" << endl;
                            break;
                        }
                        break;
                        default: 
                        cout << "Invalid Input" << endl;
                        break;
                    }
                    break;   
                    case 2: //to Abad
                    break;
                    case 3: //to nashik
                    break;
                    case 4: //to baramati
                    break;
                    default: 
                    cout << "Invalid Input" << endl;
                    break;
                }
                break;
                case 2: //from MUMBAI
                break;
                case 3: //from AURANGABAD
                break;
                case 4: //from NASHIK
                break;
                case 5: //from BARAMATI
                break;
                default: 
                cout << "Invalid Input" << endl;
                break;
            }
        }
    }
}