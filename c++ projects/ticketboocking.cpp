//Ticket Booking System
/*
1. Ask the user for movie choice.
2. Ask the seat prefrence (Royal Silver / Royal Gold / Royal Recliner)
3. Ask for the number of seats 
4. Ask for refreshments (cold drink / popcorn / sandwiches)
5. Ask for mode of payment (online / card / cash)
6. Display thank you message
*/
#include<iostream>
using namespace std;
int main()
{
	int a,i,age[100], movie, seat, ch;
    char ref;
	double amt[100],sum=0,sum2=0, price=0;
	std::cout<<"\n\t---------------------------------------------------------\n";
	std::cout<<"\t        T I C K E T    B OO K I N G    S Y S T E M\n";
	std::cout<<"\t---------------------------------------------------------\n";
    std::cout<<"\nEnter the Movie Choice!";
    std::cout<<"\n 1. Black Adam";
    std::cout<<"\n 2. Drishyam 2";
    std::cout<<"\n 3. Wakanda Forever";
    std::cout<<"\n 4. Ram Setu";
    std::cout<<"\n 5. Thank God!\n";
    std::cin>>movie;
    std::cout<<"\nEnter the Seat Prefrence!";
    std::cout<<"\n 1. Royal Silver (₹200/-)";
    std::cout<<"\n 2. Royal Gold (₹230/-)";
    std::cout<<"\n 3. Royal Recliner (₹500/-)\n";
    std::cin>>seat;
	std::cout<<"\nEnter the number of movie tickets?\n";
	std::cin>>a;
	std::cout<<"Enter the Age of Members:\n";
	for(i=0;i<a;i++)
	{
		std::cin>>age[i];
	}
	std::cout<<"\n=====================================\n";
    std::cout<<"\nTODAY'S OFFER!";
    std::cout<<"\n\n10-15(age) wins 10% discount.";
    std::cout<<"\n\n15-20(age) wins 5% discount.";
    std::cout<<"\n\nAbove Age 20 the rates are fixed!\n";
	for(i=0;i<a;i++)
	{
        switch(seat)
        {
            case 1:
            if(age[i]>=10 && age[i]<15)
            {
                amt[i]=200-(100*10/100);
                std::cout<<"\nRates for movie for "<<age[i]<<" years old member is: Rs "<<amt[i];
            }
            else if(age[i]>=15 && age[i]<=20)
            {
                amt[i]=200-(100*5/100);
                std::cout<<"\nRates for movie for "<<age[i]<<" years old member is: Rs "<<amt[i];
            }
            else if(age[i]>20)
            {
                amt[i]=200;
                std::cout<<"\nRates for movie for "<<age[i]<<" years old member is: Rs "<<amt[i];
            }
            else
            {
                std::cout<<"\n\n"<<age[i]<<"Children below age 10 can enjoy the movie for free!\n";
                amt[i]=0;
            }
		    sum+=amt[i];
            break;
            case 2:
            if(age[i]>=10 && age[i]<15)
            {
                amt[i]=230-(100*10/100);
                std::cout<<"\nRates for movie for "<<age[i]<<" years old member is: Rs "<<amt[i];
            }
            else if(age[i]>=15 && age[i]<=20)
            {
                amt[i]=230-(100*5/100);
                std::cout<<"\nRates for movie for "<<age[i]<<" years old member is: Rs "<<amt[i];
            }
            else if(age[i]>20)
            {
                amt[i]=230;
                std::cout<<"\nRates for movie for "<<age[i]<<" years old member is: Rs "<<amt[i];
            }
            else
            {
                std::cout<<"\n\n"<<age[i]<<"Children below age 10 can enjoy the movie for free!\n";
                amt[i]=0;
            }
		    sum+=amt[i];
            break;
            case 3:
            if(age[i]>=10 && age[i]<15)
            {
                amt[i]=500-(100*10/100);
                std::cout<<"\nRates for movie for "<<age[i]<<" years old member is: Rs "<<amt[i];
            }
            else if(age[i]>=15 && age[i]<=20)
            {
                amt[i]=500-(100*5/100);
                std::cout<<"\nRates for movie for "<<age[i]<<" years old member is: Rs "<<amt[i];
            }
            else if(age[i]>20)
            {
                amt[i]=500;
                std::cout<<"\nRates for movie for "<<age[i]<<" years old member is: Rs "<<amt[i];
            }
            else
            {
                std::cout<<"\n\n"<<age[i]<<"Children below age 10 can enjoy the movie for free!\n";
                amt[i]=0;
            }
		    sum+=amt[i];
            break;
            default:
            std::cout<<"\nInvalid Input";
            break;
        }
		
	}
    std::cout<<"\nDo you want Refreshments!";
    std::cout<<"\n Type y for YES and n for No\n";
    std::cin>>ref;
    switch(ref)
    {
        case 'y':
            std::cout<<"\n 1. Cold Drink (₹25/-)";
            std::cout<<"\n 2. Popcorn (₹75/-)";
            std::cout<<"\n 3. Sandwiches (₹100/-)";
            std::cout<<"\n Enter Choice\n";
            std::cin>>ch;
            switch(ch)
            {
                case 1:
                    sum+=25;
                	std::cout<<"\n\n=====================================\n";
                    std::cout<<"\nTotal Price of Ticket & Refreshments is: ₹ "<<sum;
                    std::cout<<"\n\n=====================================\n";
                break;
                case 2:
                    sum+=75;
                	std::cout<<"\n\n=====================================\n";
                    std::cout<<"\nTotal Price of Ticket & Refreshments is: ₹"<<sum;
                    std::cout<<"\n\n=====================================\n";
                break;
                case 3:
                    sum+=100;
                	std::cout<<"\n\n=====================================\n";
                    std::cout<<"\nTotal Price of Ticket & Refreshments is: ₹"<<sum;
                    std::cout<<"\n\n=====================================\n";
                break;
                default:
                std::cout<<"\nInvalid Input";
                break;
            }
        break;
        case 'n':
        std::cout<<"\n\n=====================================\n";
        std::cout<<"\nTotal Price of Ticket is: ₹"<<sum;
        std::cout<<"\n\n=====================================\n";
        break;
        default:
        std::cout<<"\nInvalid Input";
        break;
    }
    return 0;
}