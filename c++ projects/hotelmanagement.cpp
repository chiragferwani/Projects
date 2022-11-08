//Hotel Management System.
/*
Ask the user for name 
Ask for the number of seats.
Ask for type of food veg or non-veg
=================================
        VEG
=================================
Display today's special menu.
Ask for starters.
Ask for main course 
Ask for rice and noodles.
Ask for desserts.
==================================
=================================
        NON-VEG
=================================
Display today's special menu.
Ask for starters.
Ask for main course 
Ask for rice and noodles.
Ask for desserts.
==================================
Ask to display bill.
if (yes)
    display bill along with items.
else 
    display price.
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
    int choice;
    char name[100]; //name of the customer.
    int price; //to increment the price
    int no; //no of people
    int start, main, rice, des; //to store choice of the menu
    int bill; //to store 
    int type; //to store type of food veg or non-veg
    time_t tt; //Declaring argument for time
    struct tm * ti; //Declaring variable to store return value of local time
    time (&tt); //applying time
    ti = localtime(&tt); //using localtime

    cout << endl;
    cout << "WELCOME TO THE LIBRARY MANAGEMENT SYSTEM" << endl;
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
            cout << "Enter your name: " << endl;
            cin >> name; 
            cout << "Wecome to the INDIAN GRILL" << endl;
            cout << "===========================" << endl;
            cout << "What would you like to have?" << endl;
            cout << "1. Veg" << endl;
            cout << "2. Non-Veg" << endl;
            cin >> type;
            switch(type)
            {
                case 1: //for veg
                cout << "What would you like to have in Starters?"
                cout << "STARTERS" << endl;
                cout << "===========================" << endl;
                cout << "1. Soup (₹99/-)" << endl;
                cout << "2. Paneer Tikka (₹199/-)" << endl;
                cout << "3. Kebab Platter (₹399/-)" << endl;
                cout << "4. Pizza & Pasta (₹249/-)" << endl;
                cout << "5. Sandwiches (₹149/-)" << endl;
                cout << "===========================" << endl;
                cin >> start;
                switch(start)
                {
                    case 1: 
                    price += 99;
                    cout << "SA"
                    break; 
                    case 2: 
                    price += 199;
                    break; 
                    case 3:
                    price += 399; 
                    break; 
                    case 4: 
                    price += 249;
                    break; 
                    case 5: 
                    price += 149;
                    break; 
                    default: 
                    cout << "Invalid Input" << endl;
                    break;
                }
                break;
                case 2: //for non-veg
                break;
                default: 
                cout << "Invalid Input" << endl;
                break;
            }
        }
    }
}