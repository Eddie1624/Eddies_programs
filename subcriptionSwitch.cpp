#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    //To get different random numbers each time when we run the program
    srand(time(0));

    //To get random number between 0 and 11
    int daysUntilExpiration = rand() % 12; // %12 gives the remainder between 0 and 11

    //using switch to check for subscription days
    switch(daysUntilExpiration){
        case 0: //if the daysUntilExpiration is exactly 0
            cout << "Your subscription has expired."<< endl;
            break; // Exit the switch

        case 1: // if the daysUntilExpiration is exactly 1
            cout << "Your subscription expires within a day" <<"\n";
            cout << "Renew now and save 20% "<< endl;
            break;

        //From daysUntilExpiration 2 to daysUntilExpiration 11 will use default statement
        default:
            //in this default statement will use if-else statement to check the subscription

            if(daysUntilExpiration >= 2 && daysUntilExpiration <= 5){
                cout << "Your subscription expires in  "<< daysUntilExpiration << "  days \n";
                cout << "Renew now and save 10%" << endl;
            }
            else if(daysUntilExpiration >= 6 && daysUntilExpiration <= 10){
                 cout << "Your subscription will expire soon. ";
                 cout << "Renew now !" << endl;
            }
            else{
                cout << "Your have an active subscription. " << endl;
            }
    }
    return 0;
}