#include <iostream>
using namespace std;

int main(){
    // to initialize an array of the codes
    string codes[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // To iterate through all 8 elements in the array using for loop
    for(int i = 0; i < 8; i++){

        //now to check if the first letter is 'B' 
        if(codes[i][0] == 'B'){
            //codes[i] state the present code whereas [0] gets the first character of each code 
            cout << codes[i] << endl;
        }
    }
    return 0;
}