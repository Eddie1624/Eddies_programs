#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    //to get a different random number each time the program runs
    srand(time(0));

    //to generate a random number between 0 and 11
    int daysUntilExpiration = rand() % 12;

    //To check the subscription using if-else statements
    if(daysUntilExpiration == 0){
        cout << "Your subscription has expired."<< endl;
    }
    else if(daysUntilExpiration == 1){
        cout <<"Your subscription expires within a day!"<< endl;
        cout <<"Renew now and save 20% !"<< endl;
    }
    else if(daysUntilExpiration >= 2 && daysUntilExpiration <= 5){
        cout << "Your subscription expires in " << daysUntilExpiration; 
        cout <<"  days" << endl;
        cout << "Renew now and save 10% !" << endl;
    }
    else if(daysUntilExpiration >= 6 && daysUntilExpiration <= 10){
        cout <<"Your subscription will expire soon. renew now!" <<endl;
    }
    else if(daysUntilExpiration > 10){
        cout << "You have an active subscrition." << endl;
    }
    return 0;
}