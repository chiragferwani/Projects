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
class Library
{   protected:
    int ch;
    char name[100], book[100];
    int ch1, ch2, ch3, ch4, ch5, ch6, days, bookno, rd;
    int rem, fine, extra;
    public:
    void issue()
    {
                cout << "Enter your name:" << endl;
                cin >> name;
                cout << "So, " << name << " which book would you like to read?" << endl;
                cout << "1. Science Fiction" << endl;
                cout << "2. Novel" << endl;
                cout << "3. Biography" << endl;
                cout << "4. Self Help" << endl;
                cout << "5. Fantacy" << endl;
                cout << "Your choice: " << endl;
                cin >> ch1;
                switch(ch1) //switch case to enter book name
                {
                    case 1: //Science Fiction
                    cout << "1. The Time Machine" << endl;
                    cout << "2. Neuromancer" << endl;
                    cout << "3. Hyerion" << endl;
                    cout << "4. Ringworld" << endl;
                    cout << "5. The Stand" << endl;
                    cout << "Your choice: " << endl;
                    cin >> ch2;
                    switch(ch2) //switch case to print library card
                    {
                        case 1:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: The Time Machine" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 2:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: Neuromancer" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 3:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: Hyerion" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 4:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: Ringworld" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 5:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: The Stand" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        default:
                        cout << "Invalid Input" << endl;
                        break;
                    }
                    break; //for case 1
                    case 2: //for novel
                    cout << "1. A Passage to India" << endl;
                    cout << "2. Beloved" << endl;
                    cout << "3. Invisible Man" << endl;
                    cout << "4. The Good Soldier" << endl;
                    cout << "5. Middlemarch" << endl;
                    cout << "Your choice: " << endl;
                    cin >> ch3;
                    switch(ch3) //switch case to print library card
                    {
                        case 1:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: A Passage to India" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 2:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: Beloved" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 3:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: Invisible Man" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 4:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: The Good Soldier" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 5:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: Middlemarch" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        default:
                        cout << "Invalid Input" << endl;
                        break;
                    }
                    break;
                    case 3: //for biography
                    cout << "1. Steve Jobs" << endl;
                    cout << "2. Into the Wild" << endl;
                    cout << "3. Churchill: A Life" << endl;
                    cout << "4. A Long Walk to Freedom" << endl;
                    cout << "5. The Powerbreaker" << endl;
                    cout << "Your choice: " << endl;
                    cin >> ch4;
                    switch(ch4) //switch case to print library card
                    {
                        case 1:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: Steve Jobs" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 2:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: Into The Wild" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 3:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: Churchill : A Life" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 4:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: A Long Walk to Freedom" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 5:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: The Powerbreaker" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        default:
                        cout << "Invalid Input" << endl;
                        break;
                    }
                    break;
                    case 4: //for Self Help
                    cout << "1. The Power of Subconsious Mind" << endl;
                    cout << "2. Atomic Habits" << endl;
                    cout << "3. Think and Grow Rich" << endl;
                    cout << "4. The 4-hour Workweek" << endl;
                    cout << "5. The Last Lecture" << endl;
                    cout << "Your choice: " << endl;
                    cin >> ch5;
                    switch(ch5) //switch case to print library card
                    {
                        case 1:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: The Power of Subconsious Mind" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 2:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued:   Atomic Habits" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 3:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: Think and Grow Rich" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 4:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: The 4-hour Workweek" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 5:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: The Last Lecture" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        default:
                        cout << "Invalid Input" << endl;
                        break;
                    }
                    break;
                    case 5: //for Fantacy
                    cout << "1. A Game of Thrones" << endl;
                    cout << "2. The Blade Itself" << endl;
                    cout << "3. The Poppy War" << endl;
                    cout << "4. The Color of Magic" << endl;
                    cout << "5. The Hobbit" << endl;
                    cout << "Your choice: " << endl;
                    cin >> ch6;
                    switch(ch6) //switch case to print library card
                    {
                        case 1:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: A Game of Thrones" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 2:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: The Blade Itself" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 3:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: The Poppy War" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 4:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: The Color of Magic" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        case 5:
                        cout << "Note: If the book is returned after 20 days then ₹15/- will be collected for each day extra" << endl;
                        cout << "Enter the number of days required for reading the book?" << endl;
                        cin >> days;
                        cout << "=================================================" << endl;
                        cout << "LIBRARY CARD" << endl;
                        cout << "Purpose: Issuing a Book" << endl;
                        cout << "Name: " << name << endl;
                        cout << "Book Issued: The Hobbit" << endl;
                        cout << "Book Issued for: " << days << " days" << endl;
                        cout << "=================================================" << endl;
                        break;
                        default:
                        cout << "Invalid Input" << endl;
                        break;
                    }
                    break;
                    default:
                    cout << "Invalid Input" << endl;
                    break;
                }
    }
    void returnbook()
    {
                cout << "Enter your name:" << endl;
                cin >> name;
                cout << "Enter the name of the book you want to return:" << endl;
                cin >> book;
                cout << "=================================================" << endl;
                cout << "LIBRARY CARD" << endl;
                cout << "Purpose: Returning a Book" << endl;
                cout << "Name: " << name << endl;
                cout << "Book Returned: " << book << endl;
                cout << "=================================================" << endl;
    }
    void reissue()
    {
                cout << "Enter your name:" << endl;
                cin >> name;
                cout << "Enter the name of the book you want to Re-Issue:" << endl;
                cin >> book;
                cout << "Enter the book number: " <<endl;
                cin >> bookno;
                cout << "Enter the No of days you want to re-issue the book for" << endl;
                cin >> rd;
                cout << "=================================================" << endl;
                cout << "LIBRARY CARD" << endl;
                cout << "Purpose: Re-Issue a Book" << endl;
                cout << "Name: " << name << endl;
                cout << "Book Re-Issued: " << book << endl;
                cout << "Book Re-Issued for: " << rd << " days" << endl;
                cout << "=================================================" << endl;
    }
    void payfine()
    {
                cout << "Enter your name:" << endl;
                cin >> name;
                cout << "Enter the no of days you issued the book for?" << endl;
                cin >> extra; 
                rem = extra - 20; 
                fine = rem*15;
                cout << "=================================================" << endl;
                cout << "LIBRARY CARD" << endl;
                cout << "Purpose: Pay Fine Amount" << endl;
                cout << "Name: " << name << endl;
                cout << "No of Extra days: " << rem << endl;
                cout << "Fine Amount: " << fine << endl;
                cout << "=================================================" << endl;
    }
};
int main()
{
    int choice;
    int ch;
    Library obj;
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
            cout << "Welcome back!" << endl;
            cout << endl;
            cout << "ATLAS LIBRARY" << endl;
            cout << "DASHBOARD" << endl;
            cout << "1. Issue a Book" << endl;
            cout << "2. Return a Book" << endl;
            cout << "3. Re-Issue a Book" << endl;
            cout << "4. Pay Fine Amount" << endl;
            cout << "Your choice: " << endl;
            cin >> ch;
            switch(ch) //switch case to enter type of book
            {
                case 1: //Issue a book
                obj.issue();
                break;
                case 2: //Retutn a book
                obj.returnbook();
                cout << "Book Returned on: " << asctime(ti) << endl;
                break;
                case 3: //Re-Issue a Book
                obj.reissue();
                cout << "Book Re-Issued on: " << asctime(ti) << endl;
                break;
                case 4: //Pay Fine
                obj.payfine();
                cout << "Fine Paid on: " << asctime(ti) << endl;
                break;
                default:
                cout << "Invalid Input" <<endl;
                break;
            }
            return 1;
        }
    }
}