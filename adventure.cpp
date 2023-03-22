// These are the header files that we need for the code.
// We need iostream for input and output, We also need string and vector.

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iomanip>

using namespace std;

// int main() {
//     // Game code goes here
//     return 0;
// }
struct GameSta {
    string currentLocation;
    bool hasKey = false;
    // Add any other necessary game sta information here
};
void handleInput(string input, GameSta& sta) {
    if (input == "north") {
        // Check if the player can move north from their current location
        // Upda the game sta to reflect the player's new location
    } else if (input == "south") {
        // Check if the player can move south from their current location
        // Upda the game sta to reflect the player's new location
    } else if (input == "east") {
        // Check if the player can move east from their current location
        // Upda the game sta to reflect the player's new location
    } else if (input == "west") {
        // Check if the player can move west from their current location
        // Upda the game sta to reflect the player's new location
    } else if (input == "take key") {
        // Check if the player is in a location with a key
        // Upda the game sta to reflect that the player now has the key
    } else if (input == "use key") {
        // Check if the player is in a location where the key is needed
        // Upda the game sta to reflect that the key has been used
    } else {
        cout<<  " Handle any other input the player might give";
    }
}

void intro();
int main() {
	intro();
    GameSta sta;
    sta.currentLocation = "start";
    
    while ( "The player hasn't won or lost yet") {
        // Print the current location and any other necessary game sta information
        cout << "You are currently in " << sta.currentLocation << endl;
        
        // Prompt the player for input
        cout << "What would you like to do?" << endl;
        string input;
        getline(cin, input);
        
        // Handle the player's input
        handleInput(input, sta);
    }
    
    // Handle the game ending (i.e. the player winning or losing)
       
    return 0;
}

        // Introduction section 
void intro(){
    cout << "\n\n\n\t     TEXT-BASED ADVENTURE GAME";
    cout << "\n\n\n\n\t     MADE BY:WAHAB MARIAM OPEYEMI";
    cout << "\n\n\n\n\t     MATRIC NO: H/CTE/22/0710";
    cout << "\n\n\n\n\t     SUPERVISOR : ENGR NZUBE";
    cout << "\n\n\n\n\t     SCHOOL : THE FEDERAL POLYTECHNIC ILARO";
    cin.get();
}
