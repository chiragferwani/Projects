//Student Report Card Management System
/*
1. Ask the user to register / login
2. Enter details (name, marks, grade, rollno)
3. calcute percentage of each subject.
4. calculate combined percentage
5. display grade according to precentage.
*/
/*
Sample Output:
=========================================
        STUDENT REPORT CARD
=========================================
Name : Yash Chavan
Roll no: 40
MARKS:
OOP : 19 (Out of 20)    PER: 95%
DSU : 19 (Out of 20)    PER: 95%
DCO : 20 (Out of 20)    PER: 100%
POD : 20 (Out of 20)    PER: 100%
DTM : 20 (Out of 20)    PER: 100%
Total Marks: 98 (Out of 100)
Total Percentage: 98%
Grade : A+
Report Card Printed on : (actual time)
=========================================
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
    float oop, dsu, pod, dco, dtm; //subject marks.
    float tm; //total marks
    float per; //total percentage
    float poop, pdsu, ppod, pdco, pdtm; //stores percentage of each subject
    char name[100], grade[5]; //name and grade
    time_t tt; //Declaring argument for time
    struct tm * ti; //Declaring variable to store return value of local time
    time (&tt); //applying time
    ti = localtime(&tt); //using localtime

    cout << endl;
    cout << "WELCOME TO THE STUDENT REPORT CARD MANAGEMENT SYSTEM" << endl;
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

            int ch1, ch2, ch3, ch4, ch5, ch6, days, bookno, rd;
            int rem, fine, extra;
            // Display dashboard:
            cout << "STUDENT REPORT CARD MANAGEMENT SYSTEM" << endl;
            cout << "Enter your name: " << endl;
            cin >> name;
            cout << "Welcome " << name << endl;
            cout << "Enter Your Marks: (Out of 20)" << endl;
            cout << "Subject: OOP" << endl;
            cin >> oop;
             cout << "Subject: POD" << endl;
            cin >> pod;
             cout << "Subject: DSU" << endl;
            cin >> dsu;
             cout << "Subject: DCO" << endl;
            cin >> dco;
             cout << "Subject: DTM" << endl;
            cin >> dtm;
            cout << "Thank You for Entering your marks!" << endl;
            //calculating percentages
            poop = (oop/20)*100;
            pdsu = (dsu/20)*100;
            ppod = (pod/20)*100;
            pdco = (dco/20)*100;
            pdtm = (dtm/20)*100;
            //total marks
            tm = oop + pod + dsu + dtm + dco;
            //percentage
            per = (tm/100)*100;
            if(per>95)
            {
                grade == "A+";
            }
            else if (per > 90)
            {
                grade == "A";
            }
            else if (per > 85)
            {
                grade == "B+";
            }
            else if (per > 80)
            {
                grade == "B";
            }
            else if (per > 75)
            {
                grade == "C+";
            }
            else if (per > 70)
            {
                grade == "C";
            }
            else if (per > 65)
            {
                grade == "D+";
            }
            else if (per > 60)
            {
                grade == "D";
            }
            else
            {
                grade == "E";
            }
            cout << "=====================================" << endl;
            cout << "STUDENT REPORT CARD MANAGEMENT SYSTEM" << endl;
            cout << "=====================================" << endl;
            cout << "Name of the Student: " << name << endl;
            cout << "MARKS:" << endl;
            cout << "=====================================" << endl;
            cout << "OOP : " << oop << endl;
            cout << "PER : " << poop << "%" << endl;
            cout << "DSU : " << dsu << endl;
            cout << "PER : " << pdsu << "%" << endl;
            cout << "DCO: " << dco << endl;
            cout << "PER: " << pdco << "%" << endl;
            cout << "POD: " << pod << endl;
            cout << "PER: " << ppod << "%" << endl;
            cout << "DTM: " << dtm << endl;
            cout << "PER: " << pdtm << "%" << endl;
            cout << "=====================================" << endl;
            cout << "TOTAL MARKS: " << tm << endl;
            cout << "TOTAL PERCENTAGE: " << per << "%" << endl;
            cout << "GRADE: " << grade << endl;
            cout << "Report Crad printed on: " << asctime(ti) << endl;
             cout << "=====================================" << endl;
        }
    }
}